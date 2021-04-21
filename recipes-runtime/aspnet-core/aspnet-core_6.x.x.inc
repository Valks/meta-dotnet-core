###################################################################################################
# Contains additional parameters for the recipe to download the release binaries from Microsoft
# pertaining to all 6.x.x versions.
# Copyright Richard Dunkley 2021
###################################################################################################
DESCRIPTION = "This does not build this version, it only pulls the binaries from Microsoft"
BUGTRACKER = "https://github.com/aspnet/AspNetCore/issues"
SECTION = "runtime"

S = "${WORKDIR}/aspnet-${PV}"

require recipes-runtime/aspnet-core/aspnet-core_mit_6.x.x.inc

DEPENDS = "zlib"
RDEPENDS_${PN} = "icu lttng-tools lttng-ust zlib libgssglue krb5 libgssapi-krb5"

INSANE_SKIP_${PN} += "already-stripped libdir textrel"
INSANE_SKIP_${PN}-dbg += "libdir"
INSANE_SKIP_${PN} += "staticdev"

do_configure[noexec] = "1"
do_compile[noexec] = "1"

#PACKAGES =+ "${PN}-dbg ${PN}-staticdev ${PN}"

#FILES_${PN} += "${datadir}"
#FILES_${PN} += ""

FILES_${PN} += " \
	${datadir}/dotnet \
	/usr/local/share/dotnet \
	"

do_install_prepend () {
	install -d ${D}${bindir}
	install -d ${D}${datadir}/dotnet/
	install -m 0755 ${S}/dotnet ${D}${datadir}/dotnet/
	install -m 0644 ${S}/LICENSE.txt ${D}${datadir}/dotnet/
	install -m 0644 ${S}/ThirdPartyNotices.txt ${D}${datadir}/dotnet/

	install -d ${D}${datadir}/dotnet/host/fxr/${DOTNET_CORE_VERSION}/
	install -m 0755 ${S}/host/fxr/${DOTNET_CORE_VERSION}/libhostfxr.so ${D}${datadir}/dotnet/host/fxr/${DOTNET_CORE_VERSION}/

	install -d ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App/${ASPNET_CORE_VERSION}/
	
	install -m 0644 ${S}/shared/Microsoft.AspNetCore.App/${ASPNET_CORE_VERSION}/.version ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App/${ASPNET_CORE_VERSION}/.version
	for file in ${S}/shared/Microsoft.AspNetCore.App/${ASPNET_CORE_VERSION}/*.dll; do
		install -m 0644 "$file" ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App/${ASPNET_CORE_VERSION}/
	done
	for file in ${S}/shared/Microsoft.AspNetCore.App/${ASPNET_CORE_VERSION}/*.json; do
		install -m 0644 "$file" ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App/${ASPNET_CORE_VERSION}/
	done
	for file in ${S}/shared/Microsoft.AspNetCore.App/${ASPNET_CORE_VERSION}/*.txt; do
		install -m 0644 "$file" ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App/${ASPNET_CORE_VERSION}/
	done

	install -d ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App/${DOTNET_CORE_VERSION}/
	
	install -m 0644 ${S}/shared/Microsoft.NETCore.App/${DOTNET_CORE_VERSION}/.version ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App/${DOTNET_CORE_VERSION}/.version
	install -m 0644 ${S}/shared/Microsoft.NETCore.App/${DOTNET_CORE_VERSION}/createdump ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App/${DOTNET_CORE_VERSION}/createdump
	for file in ${S}/shared/Microsoft.NETCore.App/${DOTNET_CORE_VERSION}/*.so; do
		install -m 0755 "$file" ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App/${DOTNET_CORE_VERSION}/
	done
	for file in ${S}/shared/Microsoft.NETCore.App/${DOTNET_CORE_VERSION}/*.dll; do
		install -m 0644 "$file" ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App/${DOTNET_CORE_VERSION}/
	done
	for file in ${S}/shared/Microsoft.NETCore.App/${DOTNET_CORE_VERSION}/*.json; do
		install -m 0644 "$file" ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App/${DOTNET_CORE_VERSION}/
	done
	for file in ${S}/shared/Microsoft.NETCore.App/${DOTNET_CORE_VERSION}/*.a; do
		install -m 0644 "$file" ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App/${DOTNET_CORE_VERSION}/
	done

	install -d ${D}/usr/local/share

}

do_install_append() {
	cd ${D}/usr/local/share
	ln -s ../../share/dotnet ${D}/usr/local/share

	cd ${D}${bindir}
	ln -s ../share/dotnet/dotnet ${D}${bindir}/dotnet
}

