cmake_minimum_required(VERSION 3.0)
project(FreeImage)

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
