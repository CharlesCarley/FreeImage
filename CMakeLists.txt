cmake_minimum_required(VERSION 3.0)
project(FreeImage)

set(FreeImage_DEF -DFREEIMAGE_LIB)
option(FreeImage_BMP    "Build with BMP support." ON)
option(FreeImage_TARGA  "Build with TARGA support." ON)



if (FreeImage_ExternalTarget)
    set(TargetFolders ${FreeImage_TargetFolders})
    set(TargetName    ${FreeImage_TargetName})
    set(TargetGroup   ${FreeImage_TargetGroup})
else()
    set(TargetFolders FALSE)
    set(TargetName  FreeImage)
    unset(TargetGroup )
endif()

subdirs(Source)
