// This file is NOT a part of FreeImage
// It is a stub file created to conditionally
// add support for individual plug-ins
// https://github.com/CharlesCarley/FreeImage
#include "FreeImage.h"
#include "Utilities.h"
static const char *DLL_CALLCONV
Format() {
    return "PSD";
}
static const char *DLL_CALLCONV
Description() {
    return "Adobe Photoshop";
}
static const char *DLL_CALLCONV
Extension() {
    return "psd,psb";
}
static const char *DLL_CALLCONV
MimeType() {
    return "image/vnd.adobe.photoshop";
}
static BOOL DLL_CALLCONV
Validate(FreeImageIO *io, fi_handle handle) {
    return FALSE;
}
static BOOL DLL_CALLCONV
SupportsExportDepth(int depth) {
    return FALSE;
}
static BOOL DLL_CALLCONV
SupportsExportType(FREE_IMAGE_TYPE type) {
    return FALSE;
}
static void *DLL_CALLCONV
Open(FreeImageIO *io, fi_handle handle, BOOL read) {
    return NULL;
}
static void DLL_CALLCONV
Close(FreeImageIO *io, fi_handle handle, void *data) {
}
static int DLL_CALLCONV
PageCount(FreeImageIO *io, fi_handle handle, void *data) {
    return 0;
}
static FIBITMAP *DLL_CALLCONV
Load(FreeImageIO *io, fi_handle handle, int page, int flags, void *data) {
    return NULL;
}
static BOOL DLL_CALLCONV
Save(FreeImageIO *io, FIBITMAP *dib, fi_handle handle, int page, int flags, void *data) {
    return FALSE;
}
void DLL_CALLCONV
InitPSD(Plugin *plugin, int format_id) {
    plugin->format_proc = Format;
    plugin->description_proc = Description;
    plugin->extension_proc = Extension;
    plugin->regexpr_proc = NULL;
    plugin->open_proc = Open;
    plugin->close_proc = Close;
    plugin->pagecount_proc = PageCount;
    plugin->pagecapability_proc = NULL;
    plugin->load_proc = Load;
    plugin->save_proc = Save;
    plugin->validate_proc = Validate;
    plugin->mime_proc = MimeType;
    plugin->supports_export_bpp_proc = SupportsExportDepth;
    plugin->supports_export_type_proc = SupportsExportType;
    plugin->supports_icc_profiles_proc = NULL;
}
