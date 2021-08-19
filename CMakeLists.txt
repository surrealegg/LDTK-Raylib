cmake_minimum_required(VERSION 3.10)
if (POLICY CMP0074)
    cmake_policy(SET CMP0074 NEW)
endif()

project(LDTK-Raylib)

set(CMAKE_CXX_STANDARD 11)

find_package(raylib REQUIRED)
find_package(LDtkLoader REQUIRED)

if (MSVC)
    if(NOT DEFINED ${raylib_INCLUDE_DIRS})
        set(raylib_INCLUDE_DIRS ${RAYLIB_INCLUDE_DIRS})
    endif()

    if(NOT DEFINED ${raylib_LIBRARIES})
        set(raylib_LIBRARIES ${RAYLIB_LIBRARIES})
    endif()
endif()

add_executable(LDTK-Raylib src/main.cpp)
target_include_directories(LDTK-Raylib PRIVATE ${raylib_INCLUDE_DIRS})
set_target_properties(LDTK-Raylib PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ../
    RUNTIME_OUTPUT_DIRECTORY_RELEASE ../
    RUNTIME_OUTPUT_DIRECTORY_DEBUG ../
)
target_link_libraries(LDTK-Raylib PRIVATE ${raylib_LIBRARIES} LDtkLoader)
