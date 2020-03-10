For full documentation, please visit:
https://ui.vrtcal.com/sdk_documentation_1_0_0/IOSSDK.php

Directory Structure:
dSYM                     Debug Information Files. Allows an app developer to desymbolicate a crash log.
-- Device
-- Simulator
VrtcalSDK.framework      The Vrtcal SDK. Contains both device and simulator architectures.
README.txt               This file
MediationAdapters
-- VRT_is_Primary         Mediation adapters where VrtcalSDK is doing the mediation
-- VRT_is_Secondary       Mediation adapters where VrtcalSDK is being mediated
-- strip_unused_archs.sh    This can be added as a Run Script Phase to strip unused architecture slices from VrtcalSDK.framework


