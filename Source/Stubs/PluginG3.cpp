// This file is NOT a part of FreeImage
// It is a stub file created to conditionally
// add support for individual plug-ins
// https://github.com/CharlesCarley/FreeImage
#include "FreeImage.h"
#include "Utilities.h"
static const char *DLL_CALLCONV
Format() {
    return "G3";
}
static const char *DLL_CALLCONV
Description() {
    return "Raw fax format CCITT G.3";
}
static const char *DLL_CALLCONV
Extension() {
    return "g3";
}
static const char *DLL_CALLCONV
RegExpr() {
    return NULL;
}
static const char *DLL_CALLCONV
MimeType() {
    return "image/fax-g3";
}
static BOOL DLL_CALLCONV
SupportsExportDepth(int depth) {
    return FALSE;
}
static FIBITMAP *DLL_CALLCONV
Load(FreeImageIO *io, fi_handle handle, int page, int flags, void *data) {
    return NULL;
}
void DLL_CALLCONV
InitG3(Plugin *plugin, int format_id) {
    plugin->format_proc = Format;
    plugin->description_proc = Description;
    plugin->extension_proc = Extension;
    plugin->regexpr_proc = RegExpr;
    plugin->open_proc = NULL;
    plugin->close_proc = NULL;
    plugin->pagecount_proc = NULL;
    plugin->pagecapability_proc = NULL;
    plugin->load_proc = Load;
    plugin->save_proc = NULL;
    plugin->validate_proc = NULL;
    plugin->mime_proc = MimeType;
    plugin->supports_export_bpp_proc = SupportsExportDepth;
    plugin->supports_export_type_proc = NULL;
    plugin->supports_icc_profiles_proc = NULL;
}
