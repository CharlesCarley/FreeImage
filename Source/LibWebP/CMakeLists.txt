set(TargetName LibWebP)

set(LibWebP_SRC 
    ../ZLib/adler32.c
)

include_directories(.)

add_library(${TargetName} ${LibWebP_SRC})

if (TargetFolders)
	set_target_properties(${TargetName} PROPERTIES FOLDER "${FreeImage_TargetGroup}/Dependencies")
endif()

