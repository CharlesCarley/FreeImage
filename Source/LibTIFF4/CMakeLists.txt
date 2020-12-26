set(TargetName LibTIFF4)

set(LibTIFF4_SRC 
    ../ZLib/adler32.c
)

include_directories(.)

add_library(${TargetName} ${LibTIFF4_SRC})

if (TargetFolders)
	set_target_properties(${TargetName} PROPERTIES FOLDER "${FreeImage_TargetGroup}/Dependencies")
endif()

