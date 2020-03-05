# This script removes unused architectures from VrtcalSDK.framework

#Check if lipo exists on this system
if ! which lipo > /dev/null; then
    echo "error: lipo is missing"
    exit 1
fi

#Get the path to the .app file inside the derived data directory
APP_PATH="${TARGET_BUILD_DIR}/${WRAPPER_NAME}"

#Get the path to VrtcalSDK.framework/VrtcalSDK
echo "Searching APP_PATH for VrtcalSDK: [$APP_PATH]"
VrtcalSDK_PATH=$(find "$APP_PATH" -name 'VrtcalSDK' -type f)

#Bail if $VrtcalSDK_PATH is empty string
if [ -z "$VrtcalSDK_PATH" ]; then
    echo "error: Could not find VrtcalSDK!"
    exit 1
fi

#Bail if the path is not found
if [ ! -f "$VrtcalSDK_PATH" ]; then
    echo "error: File not found: $VrtcalSDK_PATH"
    exit 1
fi
echo "VrtcalSDK found at [$VrtcalSDK_PATH]"

#Get the list of architectures in the framework
VRTCAL_ARCHS=$(lipo -info "$VrtcalSDK_PATH" | sed -e "s/^.*are: //")

echo "Architectures supported by VrtcalSDK: $VRTCAL_ARCHS"
echo "Architectures supported by the application: $ARCHS"


#Convert space-delimited lists to arrays
ARCHS=($ARCHS)
VRTCAL_ARCHS=($VRTCAL_ARCHS)
REMOVE_THESE_ARCHITECTURES=()

#Find which archs are in $ARCHS but not in $VRTCAL_ARCHS
#Walk architechtures in the framework
for i in "${VRTCAL_ARCHS[@]}"
do
    FOUND=0

    #Walk the architectures supported by this application.
    #If the vrtcal arch is not found in the app arches, flag it for removal.
    for j in "${ARCHS[@]}"
    do
        if [ $i == $j ]; then
            FOUND=1
            break
        fi
    done

    if [ $FOUND -eq 0 ]; then
        REMOVE_THESE_ARCHITECTURES+=($i)
    fi
done

#Are there any architectures to remove?
if [ ${#REMOVE_THESE_ARCHITECTURES[@]} -eq 0 ]; then
    echo "No need to remove any architechtures from VrtcalSDK. Exiting."
    exit 0
fi
    
#Use lipo to remove the unused architechtures
for i in "${REMOVE_THESE_ARCHITECTURES[@]}"
    do
    echo "Removing unused architecture $i"
    lipo "$VrtcalSDK_PATH" -remove $i -output "$VrtcalSDK_PATH"
done
    
echo "Done!"
