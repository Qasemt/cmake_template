## cmake template
#### SOURCE 
[link1](https://kw0006667.wordpress.com/2017/01/31/%E9%80%8F%E9%81%8E-msbuild-%E5%9C%A8-visual-studio-code-%E7%B7%A8%E8%BC%AF%E5%9F%B7%E8%A1%8C-cc/)
#### download mingw 64bit 
>version  MinGW-W64 GCC-7.3.0 <br>

* [link download - x86_64-posix-sjlj](https://sourceforge.net/projects/mingw-w64/files/?source=navbar)

____
### config
```
1. mkdir /mybuild/build_debug
2. cd /build_debug
3. cmake -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug ./../../

```

____
### build

```
1 : cd mybuild/build_debug/
2 : cmake --build . --config Debug



1 : cd mybuild/build_release/
2 : cmake --build . --config Release
```
