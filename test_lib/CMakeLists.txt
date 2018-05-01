cmake_minimum_required (VERSION 3.0.0)
 
project (hello_test64)
#file(MAKE_DIRECTORY "./build_debug/")
#file(MAKE_DIRECTORY "./build_release/")

message("CMAKE_BUILD_TYPE = ${CMAKE_BUILD_TYPE}")

IF(CMAKE_BUILD_TYPE MATCHES Debug)
  message("Debug build.")
ELSEIF(CMAKE_BUILD_TYPE MATCHES Release)
  message("Release build.")
ENDIF()


#set(EXECUTABLE_OUTPUT_PATH ./../out/${CMAKE_BUILD_TYPE})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "./../../out/release")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG  "./../../out/debug")

#set (PRG_SOURCE src/main.cpp)
#Generate the shared library from the library sources

file(GLOB PRG_SOURCE "src/*.h" "src/*.cpp" "src/*.c" "src/*.hpp"
)

add_library(${PROJECT_NAME} SHARED  ${PRG_SOURCE})

SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES PREFIX "") # taheri : remove karan "lib " prefix ghable esme library name libXXX.dll