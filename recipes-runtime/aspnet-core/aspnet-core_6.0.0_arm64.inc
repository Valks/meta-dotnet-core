###################################################################################################
# Contains the URL and checksums to download version 6.0.0 of the ARM 64-bit ASP .Net Core runtime
# from Microsoft.
# Copyright Richard Dunkley 2021
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/3d49ea48-675e-4da9-87be-18efaa99d7f6/37807ed5012ba5e0511e08ad64d6a9a4/aspnetcore-runtime-6.0.0-linux-arm64.tar.gz;subdir=aspnet-${PV}"

SRC_URI[sha512sum] = "e61eade344b686180b8a709229d6b3180ea6f085523e5e4e4b0d23dd00cf9edce3e51a920c986b1bab7d04d8cab5aae219c3b533b6feb84b32a02810936859b0"

DOTNET_CORE_VERSION = "6.0.0"
ASPNET_CORE_VERSION = "6.0.0"