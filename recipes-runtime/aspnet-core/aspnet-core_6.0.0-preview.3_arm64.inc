###################################################################################################
# Contains the URL and checksums to download version 6.0.0-preview.3 of the ARM 64-bit ASP .Net Core runtime
# from Microsoft.
# Copyright Richard Dunkley 2021
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/f5171161-ffd4-4649-9076-e3a20b6543e4/f9b1a9eec1cfd642266c73da656da1d7/aspnetcore-runtime-6.0.0-preview.3.21201.13-linux-arm64.tar.gz;subdir=aspnet-${PV}"

SRC_URI[md5sum] = "dfd820dd7b57791a23e48e422edeb38d"
SRC_URI[sha256sum] = "a4478ad01600ce2de84b106e86a7fe7b735a8b171e35a18c1574a99d5b2f0770"

DOTNET_CORE_VERSION = "6.0.0-preview.3.21201.4"
ASPNET_CORE_VERSION = "6.0.0-preview.3.21201.13"