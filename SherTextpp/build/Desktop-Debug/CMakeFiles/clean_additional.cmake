# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/SherTextpp_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/SherTextpp_autogen.dir/ParseCache.txt"
  "SherTextpp_autogen"
  )
endif()
