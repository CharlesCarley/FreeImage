

if (FreeImage_BMP)
    set(FreeImage_BMP_SRC
        FreeImage/PluginBMP.cpp
    )
endif()

if (FreeImage_TARGA)
    set(FreeImage_TARGA_SRC
        FreeImage/PluginTARGA.cpp
    )
endif()


set(FreeImage_PLUGINS
    ${FreeImage_BMP_SRC}
    ${FreeImage_TARGA_SRC}
    #FreeImage/PluginCUT.cpp
    #FreeImage/PluginDDS.cpp
    #FreeImage/PluginEXR.cpp
    #FreeImage/PluginG3.cpp
    #FreeImage/PluginGIF.cpp
    #FreeImage/PluginHDR.cpp
    #FreeImage/PluginICO.cpp
    #FreeImage/PluginIFF.cpp
    #FreeImage/PluginJ2K.cpp
    #FreeImage/PluginJNG.cpp
    #FreeImage/PluginJP2.cpp
    #FreeImage/PluginJPEG.cpp
    #FreeImage/PluginJXR.cpp
    #FreeImage/PluginKOALA.cpp
    #FreeImage/PluginMNG.cpp
    #FreeImage/PluginPCD.cpp
    #FreeImage/PluginPCX.cpp
    #FreeImage/PluginPFM.cpp
    #FreeImage/PluginPICT.cpp
    #FreeImage/PluginPNG.cpp
    #FreeImage/PluginPNM.cpp
    #FreeImage/PluginPSD.cpp
    #FreeImage/PluginRAS.cpp
    #FreeImage/PluginRAW.cpp
    #FreeImage/PluginSGI.cpp
    #FreeImage/PluginTIFF.cpp
    #FreeImage/PluginWBMP.cpp
    #FreeImage/PluginWebP.cpp
    #FreeImage/PluginXBM.cpp
    #FreeImage/PluginXPM.cpp
)


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

add_definitions(${FreeImage_DEF} -D_CRT_SECURE_NO_WARNINGS)
include_directories(.)


add_library(
    ${TargetName} 
    ${TargetName_SOURCE}
)

if (TargetFolders)
    set_target_properties(${TargetName} PROPERTIES FOLDER "${TargetGroup}")
endif()
