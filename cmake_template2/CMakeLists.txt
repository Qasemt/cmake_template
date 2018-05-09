cmake_minimum_required (VERSION 3.0.0)
 
project (vs_test)

if (MINGW)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "./../../out/mingw/release")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG  "./../../out/mingw/debug")

elseif (MSVC)

set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "./../../out/vs64/release")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG  "./../../out/vs64/debug")
endif()


#file(MAKE_DIRECTORY "./mybuild/build_debug/")
#file(MAKE_DIRECTORY "./mybuild/build_release/")

message(STATUS "We are on a ${CMAKE_SYSTEM_NAME} system")
message(STATUS "The host processor is ${CMAKE_HOST_SYSTEM_PROCESSOR}")
#message(STATUS "CMAKE_BUILD_TYPE = ${CMAKE_BUILD_TYPE}")

IF(CMAKE_BUILD_TYPE MATCHES Debug)
  message(STATUS "Debug build.")
ELSEIF(CMAKE_BUILD_TYPE MATCHES Release)
  message(STATUS "Release build.")
ENDIF()



#__________________________ the shared library:
#set (PROJECT_LINK_SHARED_LIBS "hello_test64.dll")
#link_directories("..\\mybuild\\out\\debug")


#message(2222 ${CMAKE_CURRENT_SOURCE_DIR})
#set(EXECUTABLE_OUTPUT_PATH ./../out/${CMAKE_BUILD_TYPE})
#"D:/mingw-w64/mingw64/x86_64-w64-mingw32/include"
#include_directories ("../test_lib/src/"  )



#_______ ADD SOURCES 
#set (PRG_SOURCE src/main.cpp src/helper.cpp)

file(GLOB PRG_SOURCE "src/*.h" "src/*.cpp" "src/*.c" "src/*.hpp")
  

#_______ CREATE EXE
add_executable (${PROJECT_NAME} ${PRG_SOURCE})

#______ SET LIBRARY DYNAMIC AND STATIC 
#if(WIN32)
#target_link_libraries(${PROJECT_NAME} ${PROJECT_LINK_SHARED_LIBS} )
#endif()

