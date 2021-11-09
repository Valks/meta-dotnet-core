###################################################################################################
# Contains the URL and checksums to download version 6.0.0 of the ARM 64-bit .Net Core runtime
# from Microsoft.
# Copyright Richard Dunkley 2021
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/e59e190b-fceb-481e-9d82-f1e0660a0a72/3961d79c2fe1e8a2ee8ff3b1bb5e8472/dotnet-runtime-6.0.0-linux-arm64.tar.gz"

SRC_URI[sha512sum] = "b0f0f2b4dc0a31b06cc3af541a3c44260317ca3a4414a5d50e6cf859d93821b3d2c2246baec9f96004aeb1eb0e353631283b11cf3acc134d4694f0ed71c9503d"

DOTNET_CORE_VERSION = "6.0.0"