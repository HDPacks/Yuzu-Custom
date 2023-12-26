#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "dynarmic::dynarmic" for configuration "Debug"
set_property(TARGET dynarmic::dynarmic APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(dynarmic::dynarmic PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/dynarmic.lib"
  )

list(APPEND _cmake_import_check_targets dynarmic::dynarmic )
list(APPEND _cmake_import_check_files_for_dynarmic::dynarmic "${_IMPORT_PREFIX}/lib/dynarmic.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
