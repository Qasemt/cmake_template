RMDIR  /s /q build_debug
RMDIR  /s /q build_release
RMDIR  /s /q CMakeFiles
del  /s /q cmake_install.cmake
del  /s /q  CMakeCache.txt
del  /s /q Makefile
rem --------------------
RMDIR  /s /q hello_world_app\build_debug
RMDIR  /s /q hello_world_app\build_release
RMDIR  /s /q hello_world_app\CMakeFiles
del  /s /q hello_world_app\cmake_install.cmake
del  /s /q  hello_world_app\CMakeCache.txt
del  /s /q hello_world_app\Makefile
rem --------------------
RMDIR  /s /q .\test_lib\build_debug
RMDIR  /s /q .\test_lib\build_release
RMDIR  /s /q .\test_lib\CMakeFiles
del  /s /q .\test_lib\cmake_install.cmake
del  /s /q  .\test_lib\CMakeCache.txt
del  /s /q .\test_lib\Makefile