# FreeImage

Build dependency for  [FreeImage](https://freeimage.sourceforge.io/)

This is a modified version with a CMake build system.

The CMake system will allow building partial plugin support by stubbing individual plugins that are not in use.

## Note

At the moment not all loaders have been setup to build (it's on an as needed basis)

## Building

Building with CMake

```txt
mkdir build
cd build
cmake ..
```

## Optional Defines

```txt
-DFreeImage_BMP   = ON
-DFreeImage_TARGA = ON
-DFreeImage_PNG   = ON
-DFreeImage_JPEG  = ON
-DFreeImage_GIF   = OFF
-DFreeImage_XPM   = OFF
-DFreeImage_ICO   = OFF
-DFreeImage_PSD   = OFF
-DFreeImage_CUT   = OFF
-DFreeImage_DDS   = OFF
-DFreeImage_XBM   = OFF
-DFreeImage_EXR   = OFF
-DFreeImage_G3    = OFF
-DFreeImage_HDR   = OFF
-DFreeImage_IFF   = OFF
-DFreeImage_J2K   = OFF
-DFreeImage_JNG   = OFF
-DFreeImage_JP2   = OFF
-DFreeImage_JXR   = OFF
-DFreeImage_KOALA = OFF
-DFreeImage_MNG   = OFF
-DFreeImage_PCD   = OFF
-DFreeImage_PCX   = OFF
-DFreeImage_PFM   = OFF
-DFreeImage_PICT  = OFF
-DFreeImage_PNM   = OFF
-DFreeImage_PFM   = OFF
-DFreeImage_RAS   = OFF
-DFreeImage_RAW   = OFF
-DFreeImage_SGI   = OFF
-DFreeImage_TIFF  = OFF
-DFreeImage_WBMP  = OFF
-DFreeImage_WebP  = OFF
```
