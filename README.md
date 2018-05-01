## cmake template

#### download mingw 64bit 
>version  MinGW-W64 GCC-7.3.0 <br>

* [link download - x86_64-posix-sjlj](https://sourceforge.net/projects/mingw-w64/files/?source=navbar)

____
### config
```
1. mkdir /mybuild/build_debug
2. cd /build_debug
3. cmake -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug ./../../


1. mkdir /mybuild/build_release
2. cd /mybuild/build_release
3. cmake -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Release ./../../
```

____
### build

```
1 : cd mybuild/build_debug/
2 : cmake --build . --config Debug



1 : cd mybuild/build_release/
2 : cmake --build . --config Release
```
