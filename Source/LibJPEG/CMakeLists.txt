set(FreeImage_EXTRAS )



set(LibJPEG_HDR
	cderror.h
	cdjpeg.h
	jconfig.h
	jdct.h
	jerror.h
	jinclude.h
	jmemsys.h
	jmorecfg.h
	jpegint.h
	jpeglib.h
	jversion.h
	transupp.h
)	

set(LibJPEG_SRC
	jaricom.c
	jcapimin.c
	jcapistd.c
	jcarith.c
	jccoefct.c
	jccolor.c
	jcdctmgr.c
	jchuff.c
	jcinit.c
	jcmainct.c
	jcmarker.c
	jcmaster.c
	jcomapi.c
	jcparam.c
	jcprepct.c
	jcsample.c
	jdapimin.c
	jdapistd.c
	jdarith.c
	jdatadst.c
	jdatasrc.c
	jdcoefct.c
	jdcolor.c
	jddctmgr.c
	jdhuff.c
	jdinput.c
	jdmainct.c
	jdmarker.c
	jdmaster.c
	jdmerge.c
	jdpostct.c
	jdsample.c
	jdtrans.c
	jerror.c
	jfdctflt.c
	jfdctfst.c
	jfdctint.c
	jidctflt.c
	jidctfst.c
	jidctint.c
	jmemansi.c
	jmemmgr.c
	#jpegtran.c
	jquant1.c
	jquant2.c
	jutils.c
	rdbmp.c
	rdcolmap.c
	rdgif.c
	rdjpgcom.c
	rdppm.c
	rdrle.c
	rdswitch.c
	rdtarga.c
	transupp.c
)

list(APPEND FreeImage_EXTRAS 
		${LibJPEG_SRC}
		${LibJPEG_HDR}
	)

include_directories(.)
add_library(LibJPEG ${FreeImage_EXTRAS})
set_target_properties(LibJPEG PROPERTIES FOLDER "${FreeImage_TargetGroup}/Dependencies")
