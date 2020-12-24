set(TargetName_SOURCE 
)

#add_executable(
#    ${TargetName} 
#    ${TargetName_SOURCE}
#)

if (TargetFolders)
    set_target_properties(${TargetName} PROPERTIES FOLDER "${TargetGroup}")
endif()
