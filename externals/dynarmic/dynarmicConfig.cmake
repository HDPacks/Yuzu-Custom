
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was dynarmicConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

include(CMakeFindDependencyMacro)

set(ARCHITECTURE "x86_64")

if (NOT OFF)
    find_dependency(Boost 1.57)
    find_dependency(fmt 9)
    find_dependency(mcl 0.1.12 EXACT)
    find_dependency(tsl-robin-map)

    if ("arm64" IN_LIST ARCHITECTURE)
        find_dependency(oaknut)
    endif()

    if ("x86_64" IN_LIST ARCHITECTURE)
        find_dependency(xbyak 6)
        find_dependency(Zydis 4)
    endif()

    if (OFF)
        find_dependency(LLVM CONFIG)
    endif()
endif()

include("${CMAKE_CURRENT_LIST_DIR}/dynarmicTargets.cmake")

check_required_components(dynarmic)
