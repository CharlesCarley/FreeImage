

set(FreeImage_PLUGINS )

macro(SetPlugin_SOURCE TAR Plugin)
    option(FreeImage_${Plugin} "Build the ${Plugin} plugin" OFF)


    if (FreeImage_${Plugin})
        message(STATUS "-- Using Plugin ${Plugin}")
        add_definitions(-DFreeImage_${Plugin})
        set(FreeImage_${Plugin}_SRC
            FreeImage/Plugin${Plugin}.cpp
        )
    else ()
        set(FreeImage_${Plugin}_SRC
            Stubs/Plugin${Plugin}.cpp
        )
    endif()
    
    list(APPEND ${TAR} ${FreeImage_${Plugin}_SRC})

endmacro()
SetPlugin_SOURCE(FreeImage_PLUGINS XBM)
SetPlugin_SOURCE(FreeImage_PLUGINS XPM)
SetPlugin_SOURCE(FreeImage_PLUGINS TARGA)
SetPlugin_SOURCE(FreeImage_PLUGINS BMP)
SetPlugin_SOURCE(FreeImage_PLUGINS CUT)
SetPlugin_SOURCE(FreeImage_PLUGINS DDS)
SetPlugin_SOURCE(FreeImage_PLUGINS GIF)

SetPlugin_SOURCE(FreeImage_PLUGINS EXR)
SetPlugin_SOURCE(FreeImage_PLUGINS G3)
SetPlugin_SOURCE(FreeImage_PLUGINS HDR)
SetPlugin_SOURCE(FreeImage_PLUGINS ICO)
SetPlugin_SOURCE(FreeImage_PLUGINS IFF)
SetPlugin_SOURCE(FreeImage_PLUGINS J2K)
SetPlugin_SOURCE(FreeImage_PLUGINS JNG)
SetPlugin_SOURCE(FreeImage_PLUGINS JP2)
SetPlugin_SOURCE(FreeImage_PLUGINS JPEG)
SetPlugin_SOURCE(FreeImage_PLUGINS JXR)
SetPlugin_SOURCE(FreeImage_PLUGINS KOALA)
SetPlugin_SOURCE(FreeImage_PLUGINS MNG)
SetPlugin_SOURCE(FreeImage_PLUGINS PCD)
SetPlugin_SOURCE(FreeImage_PLUGINS PCX)
SetPlugin_SOURCE(FreeImage_PLUGINS PFM)
SetPlugin_SOURCE(FreeImage_PLUGINS PSD)
SetPlugin_SOURCE(FreeImage_PLUGINS PICT)
SetPlugin_SOURCE(FreeImage_PLUGINS PNG)
SetPlugin_SOURCE(FreeImage_PLUGINS PNM)
SetPlugin_SOURCE(FreeImage_PLUGINS PFM)
SetPlugin_SOURCE(FreeImage_PLUGINS RAS)
SetPlugin_SOURCE(FreeImage_PLUGINS RAW)
SetPlugin_SOURCE(FreeImage_PLUGINS SGI)
SetPlugin_SOURCE(FreeImage_PLUGINS TIFF)
SetPlugin_SOURCE(FreeImage_PLUGINS WBMP)
SetPlugin_SOURCE(FreeImage_PLUGINS WebP)


set(FreeImage_SOURCE
    FreeImage/BitmapAccess.cpp
    FreeImage/CacheFile.cpp
    FreeImage/ColorLookup.cpp
    FreeImage/Conversion.cpp
    FreeImage/Conversion16_555.cpp
    FreeImage/Conversion16_565.cpp
    FreeImage/Conversion24.cpp
    FreeImage/Conversion32.cpp
    FreeImage/Conversion4.cpp
    FreeImage/Conversion8.cpp
    FreeImage/ConversionFloat.cpp
    FreeImage/ConversionRGB16.cpp
    FreeImage/ConversionRGBA16.cpp
    FreeImage/ConversionRGBAF.cpp
    FreeImage/ConversionRGBF.cpp
    FreeImage/ConversionType.cpp
    FreeImage/ConversionUINT16.cpp
    FreeImage/FreeImage.cpp
    FreeImage/FreeImageIO.cpp
    FreeImage/GetType.cpp
    FreeImage/Halftoning.cpp
    FreeImage/J2KHelper.cpp
    FreeImage/LFPQuantizer.cpp
    FreeImage/MemoryIO.cpp
    FreeImage/MNGHelper.cpp
    FreeImage/MultiPage.cpp
    FreeImage/NNQuantizer.cpp
    FreeImage/PixelAccess.cpp
    FreeImage/Plugin.cpp
    FreeImage/PSDParser.cpp
    FreeImage/TIFFLogLuv.cpp
    FreeImage/tmoColorConvert.cpp
    FreeImage/tmoDrago03.cpp
    FreeImage/tmoFattal02.cpp
    FreeImage/tmoReinhard05.cpp
    FreeImage/ToneMapping.cpp
    FreeImage/WuQuantizer.cpp
    FreeImage/ZLibInterface.cpp


    Metadata/Exif.cpp
    Metadata/FIRational.cpp
    Metadata/FreeImageTag.cpp
    Metadata/IPTC.cpp
    Metadata/TagConversion.cpp
    Metadata/TagLib.cpp
    Metadata/XTIFF.cpp


    FreeImageToolkit/Background.cpp
    FreeImageToolkit/BSplineRotate.cpp
    FreeImageToolkit/Channels.cpp
    FreeImageToolkit/ClassicRotate.cpp
    FreeImageToolkit/Colors.cpp
    FreeImageToolkit/CopyPaste.cpp
    FreeImageToolkit/Display.cpp
    FreeImageToolkit/Flip.cpp
    FreeImageToolkit/JPEGTransform.cpp
    FreeImageToolkit/MultigridPoissonSolver.cpp
    FreeImageToolkit/Rescale.cpp
    FreeImageToolkit/Resize.cpp
)



set(FreeImage_HEADER
    CacheFile.h
    FreeImage.h
    FreeImageIO.h
    MapIntrospector.h
    Plugin.h
    Quantizers.h
    ToneMapping.h
    Utilities.h
    FreeImage/J2KHelper.h
    FreeImage/PSDParser.h

    Metadata/FIRational.h
    Metadata/FreeImageTag.h

    FreeImageToolkit/Filters.h
    FreeImageToolkit/Resize.h

)


if(MSVC)
    source_group("Base\\Header" FILES ${FreeImage_HEADER})
    source_group("Base\\Source" FILES ${FreeImage_SOURCE})
    source_group("Plugins" FILES ${FreeImage_PLUGINS})
endif()



set(TargetName_SOURCE
    ${FreeImage_SOURCE}  
    ${FreeImage_HEADER}
    ${FreeImage_PLUGINS}
)
add_definitions(-DFREEIMAGE_LIB)
add_definitions(-D_CRT_SECURE_NO_WARNINGS -DLIBRAW_NODLL)
include_directories(. OpenEXR OpenEXR/Imath)


add_library(
    ${TargetName} 
    ${TargetName_SOURCE}
)

if (TargetFolders)
    set_target_properties(${TargetName} PROPERTIES FOLDER "${TargetGroup}")
endif()
