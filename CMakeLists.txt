cmake_minimum_required(VERSION 3.16)
project(tron C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(tron
    src/main.c
    src/window.c
    src/init.c
    src/camera.c
    src/loader.c
    src/models.c
)

target_include_directories(tron PRIVATE
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/include
)

# -Wall
target_compile_options(tron PRIVATE -Wall)

set_target_properties(tron PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/output
)

target_link_libraries(tron PRIVATE
    ${CMAKE_SOURCE_DIR}/raylib/src/libraylib.a
)

if(APPLE)
    target_link_libraries(tron PRIVATE
        "-framework CoreVideo"
        "-framework IOKit"
        "-framework Cocoa"
        "-framework GLUT"
        "-framework OpenGL"
    )
endif()
