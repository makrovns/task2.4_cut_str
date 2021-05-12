set(SOURCE_LIB
substring_library.cpp
substring_library.hpp
)

add_library(${PRO}_lib STATIC ${SOURCE_LIB})

target_include_directories(${PRO}_lib PUBLIC ${CMAKE_CURRENT_LIST_DIR})

source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${SOURCE_LIB})

set_property(TARGET ${PRO}_lib PROPERTY FOLDER "substring_lib")

add_subdirectory(tests)