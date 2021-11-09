###################################################################################################
# Contains the URL and checksums to download version 6.0.0 of the ARM ASP .Net Core runtime from
# Microsoft.
# Copyright Richard Dunkley 2021
###################################################################################################

SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/b86e414a-929a-42a5-ba18-45ad2ebe292f/3617879c51e87fe70073006bf2d60386/aspnetcore-runtime-6.0.0-linux-arm.tar.gz;subdir=aspnet-${PV}"

SRC_URI[sha512sum] = "36be738bb40a0cadacd4531c3597a25fd45deb7c48090ffb61c79a5db7742a5b8e13051b06556e15e7e162e4a044795c0ca5e6da4db26b63b05c37b39e74e301"

DOTNET_CORE_VERSION = "6.0.0"
ASPNET_CORE_VERSION = "6.0.0"