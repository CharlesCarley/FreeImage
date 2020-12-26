set(TargetName LibRawLite)

set(LibRawLite_SRC 
    ../ZLib/adler32.c
)

include_directories(.)

add_library(${TargetName} ${LibRawLite_SRC})

if (TargetFolders)
	set_target_properties(${TargetName} PROPERTIES FOLDER "${FreeImage_TargetGroup}/Dependencies")
endif()

