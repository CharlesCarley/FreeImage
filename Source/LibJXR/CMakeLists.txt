set(TargetName LibJXR)

set(LIBJXR_SRCS 
    ../ZLib/adler32.c
)

include_directories(.)

add_library(${TargetName} ${LIBJXR_SRCS})

if (TargetFolders)
	set_target_properties(${TargetName} PROPERTIES FOLDER "${FreeImage_TargetGroup}/Dependencies")
endif()

