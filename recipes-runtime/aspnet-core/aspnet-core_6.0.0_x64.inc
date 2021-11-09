###################################################################################################
# Contains the URL and checksums to download version 6.0.0 of the x86 64-bit ASP .Net Core runtime
# from Microsoft.
# Copyright Richard Dunkley 2021
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/a8dd1c9d-1a47-4135-8ad8-7091ff6bbe1e/6af53c3eee71038248937daf4599f06a/aspnetcore-runtime-6.0.0-linux-x64.tar.gz;subdir=aspnet-${PV}"

SRC_URI[sha512sum] = "6a1ae878efdc9f654e1914b0753b710c3780b646ac160fb5a68850b2fd1101675dc71e015dbbea6b4fcf1edac0822d3f7d470e9ed533dd81d0cfbcbbb1745c6c"

DOTNET_CORE_VERSION = "6.0.0"
ASPNET_CORE_VERSION = "6.0.0"