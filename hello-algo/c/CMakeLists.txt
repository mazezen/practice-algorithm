# 指定 CMake 最低版本要求
cmake_minimum_required(VERSION 3.10)

# 定义项目的名称和使用的编程语言
project(hello-algo C)

# 这只C编译器版本
set(CMKAE_C_STANDER 17)

# 添加头文件搜索路径
include_directories(./include)

# 添加子目录
add_subdirectory(chapter_computational_complexity)
