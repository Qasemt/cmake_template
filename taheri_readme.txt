1. mkdir /mybuild/build_debug
2. cd /build_debug
3. cmake -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug ./../../


1. mkdir /mybuild/build_release
2. cd /mybuild/build_release
3. cmake -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Release ./../../



____________ Build _____________
1 : cd mybuild/build_debug/
2 : cmake --build . --config Debug



1 : cd mybuild/build_release/
2 : cmake --build . --config Release