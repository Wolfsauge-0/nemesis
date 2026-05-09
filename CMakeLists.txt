cmake_minimum_required(VERSION 3.25.0)
project(list)

add_executable(list)

target_sources( list
  PRIVATE
    main.cpp
)

add_library(ListTools)

target_sources(ListTools
  PRIVATE
    ListTools/ListTools.cpp
  PUBLIC
    FILE_SET HEADERS
    BASE_DIRS
      ListTools
    FILES
      ListTools/ListTools.hpp    
)

target_link_libraries(list
  PRIVATE
    ListTools
)

enable_testing()

# add_library(list-module STATIC "include/list-module/list-module.h" "src/list-module/module.cpp")
# include_directories("${CMAKE_SOURCE_DIR}/include/list-module")
# link_directories("${CMAKE_SOURCE_DIR}/include/list-module")
# add_subdirectory("${CMAKE_SOURCE_DIR}/src/list-module")

# add_executable(list "${CMAKE_SOURCE_DIR}/src/main.cpp")

# target_link_libraries( list list-module)
# include(CTest)
# enable_testing()

