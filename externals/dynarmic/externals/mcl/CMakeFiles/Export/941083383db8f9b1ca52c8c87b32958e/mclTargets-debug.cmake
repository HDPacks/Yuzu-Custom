#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "merry::mcl" for configuration "Debug"
set_property(TARGET merry::mcl APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(merry::mcl PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/mcl.lib"
  )

list(APPEND _cmake_import_check_targets merry::mcl )
list(APPEND _cmake_import_check_files_for_merry::mcl "${_IMPORT_PREFIX}/lib/mcl.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
