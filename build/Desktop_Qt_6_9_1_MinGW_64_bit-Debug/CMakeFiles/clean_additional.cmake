# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QtTodo_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QtTodo_autogen.dir\\ParseCache.txt"
  "QtTodo_autogen"
  )
endif()
