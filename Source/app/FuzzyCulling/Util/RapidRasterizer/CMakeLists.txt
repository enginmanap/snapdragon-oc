cmake_minimum_required(VERSION 3.5.1)

# source
aux_source_directory(./src SRC)

# header
file(GLOB_RECURSE CURRENT_HEADERS  *.h *.hpp)
source_group("Include" FILES ${CURRENT_HEADERS})

if (SDOC_IOS)
    # Temporary solution: To print the log, mark the source files as OBJCXX, which is a mixed type contains both C++ and Obj-C
    set_source_files_properties(${SRC} PROPERTIES LANGUAGE OBJCXX)
endif()

# library
add_library(RapidRasterizer STATIC ${SRC} ${CURRENT_HEADERS})

if(NOT MSVC)
    target_compile_options(RapidRasterizer PRIVATE -fno-strict-aliasing)
endif()

# link
target_link_libraries(RapidRasterizer Common)
