// This file is NOT a part of FreeImage
// It is a stub file created to conditionally
// add support for individual plug-ins
// https://github.com/CharlesCarley/FreeImage
#include "FreeImage.h"
#include "Utilities.h"
static const char *DLL_CALLCONV Format() {
    return "BMP";
}
static const char *DLL_CALLCONV
Description() {
    return "Windows or OS/2 Bitmap";
}
static const char *DLL_CALLCONV
Extension() {
    return "bmp";
}
static const char *DLL_CALLCONV
RegExpr() {
    return "^BM";
}
static const char *DLL_CALLCONV
MimeType() {
    return "image/bmp";
}
static BOOL DLL_CALLCONV
Validate(FreeImageIO *io, fi_handle handle) {
    return FALSE;
}
static BOOL DLL_CALLCONV
SupportsExportDepth(int depth) {
    return FALSE;
}
static BOOL DLL_CALLCONV SupportsExportType(FREE_IMAGE_TYPE type) {
    return (type == FIT_BITMAP) ? TRUE : FALSE;
}
static BOOL DLL_CALLCONV SupportsNoPixels() {
    return TRUE;
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
InitBMP(Plugin *plugin, int format_id) {
    plugin->format_proc = Format;
    plugin->description_proc = Description;
    plugin->extension_proc = Extension;
    plugin->regexpr_proc = RegExpr;
    plugin->open_proc = NULL;
    plugin->close_proc = NULL;
    plugin->pagecount_proc = NULL;
    plugin->pagecapability_proc = NULL;
    plugin->load_proc = Load;
    plugin->save_proc = Save;
    plugin->validate_proc = Validate;
    plugin->mime_proc = MimeType;
    plugin->supports_export_bpp_proc = SupportsExportDepth;
    plugin->supports_export_type_proc = SupportsExportType;
    plugin->supports_icc_profiles_proc = NULL;
    plugin->supports_no_pixels_proc = SupportsNoPixels;
}
