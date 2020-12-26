set(TargetName LibPNG)

set(LibPNG_SRC 
	png.c
	pngerror.c
	pngget.c
	pngmem.c
	pngpread.c
	pngread.c
	pngrio.c
	pngrtran.c
	pngrutil.c
	pngset.c
	pngtest.c
	pngtrans.c
	pngwio.c
	pngwrite.c
	pngwtran.c
	pngwutil.c

	png.h
	pngconf.h
	pngdebug.h
	pnginfo.h
	pnglibconf.h
	pngpriv.h
	pngstruct.h
)

include_directories(. ../ZLib)

add_library(${TargetName} ${LibPNG_SRC})
target_link_libraries(${TargetName} ZLib)

if (TargetFolders)
	set_target_properties(${TargetName} PROPERTIES FOLDER "${FreeImage_TargetGroup}/Dependencies")
endif()

