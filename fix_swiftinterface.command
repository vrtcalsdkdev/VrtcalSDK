find . -type f -name "*swiftinterface" -print0 | xargs -0 perl -pi -e 's/VrtcalSDK\.//g'