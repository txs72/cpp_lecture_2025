# C++ 编程实践课程代码 📚

C++ 编程实践课程的示例代码，涵盖了每次课程的核心知识点和实践项目。

## 📅 课程安排

### 第一次课程 (2024-09-16) - C++ 基础与编译链接
**目录**: `0916/`

### 第二次课程 (2024-09-23) - 数据类型与库使用
**目录**: `0923/`

---

## 🎯 第一次课程：C++ 基础与编译链接 (0916)

### 📁 项目结构
```
0916/
├── hello.cpp                              # 主程序文件
├── add.cpp                                 # 函数实现文件
├── add.h                                   # 头文件声明
├── Makefile                                # 编译配置
└── cpp_preprocessor_static_link_analysis.md # 深度技术分析报告
```

### 🔧 核心知识点

#### 1. C++ 程序基本结构
- **头文件包含**: `#include <iostream>` 系统头文件，`#include "add.h"` 用户头文件
- **命名空间**: `using namespace std;` 的使用
- **宏定义**: `#define MAX 10` 预处理器宏
- **主函数**: `int main(int argc, char** argv)` 标准入口点

#### 2. 编译链接过程
- **预处理阶段**: 宏展开、头文件包含、条件编译
- **编译阶段**: 源代码转换为目标文件 (.o)
- **链接阶段**: 多个目标文件合并为可执行文件

#### 3. Makefile 构建系统
```makefile
hello: hello.o add.o          # 目标依赖关系
	g++ hello.o add.o -o hello    # 链接命令

add.o: add.cpp                # 编译规则
	g++ -c add.cpp

hello.o: hello.cpp
	g++ -c hello.cpp
```

#### 4. 模块化编程
- **头文件声明**: `int add(int, int);` 函数原型
- **源文件实现**: 具体的函数定义
- **分离编译**: 独立编译各个模块

### 🔍 深度技术分析

#### 预处理器问题诊断
- **Apple Clang vs GCC**: 不同编译器的预处理器差异
- **头文件搜索路径**: C++ 标准库路径配置
- **解决方案**: 使用正确的 C++ 预处理器工具

#### 静态链接分析
- **macOS 限制**: 系统不再提供静态库支持
- **动态链接**: 现代操作系统的推荐方式
- **部分静态链接**: GCC 的 `-static-libgcc -static-libstdc++` 选项

---

## 🎯 第二次课程：数据类型与库使用 (0923)

### 📁 项目结构
```
0923/
├── data-type/          # 数据类型示例项目
│   ├── basic_types.cpp      # 基本数据类型
│   ├── arrays_pointers.cpp  # 数组和指针
│   ├── struct_union.cpp     # 结构体和联合体
│   ├── enum_types.cpp       # 枚举类型
│   ├── modern_types.cpp     # 现代C++类型
│   ├── Makefile            # 编译配置
│   └── README.md           # 详细说明文档
└── use_lib/            # 库使用示例项目
    ├── src/hello.cpp        # 主程序
    ├── lib/calc.h           # 计算库头文件
    ├── lib/calc.cpp         # 计算库实现
    └── Makefile            # 编译配置
```

### 🔧 核心知识点

#### 1. 基本数据类型 (`basic_types.cpp`)
- **整数类型**: `char`, `short`, `int`, `long`, `long long`
- **无符号类型**: `unsigned` 修饰符的使用
- **浮点类型**: `float`, `double`, `long double`
- **布尔类型**: `bool` 类型和逻辑运算
- **类型转换**: 隐式和显式类型转换
- **内存占用**: `sizeof` 操作符的使用

#### 2. 数组和指针 (`arrays_pointers.cpp`)
- **数组基础**: 一维、二维数组的声明和初始化
- **字符数组**: C 风格字符串处理
- **指针概念**: 内存地址、解引用操作
- **指针运算**: 指针算术和数组访问
- **多级指针**: 指针的指针概念
- **空指针**: `nullptr` 的正确使用

#### 3. 结构体和联合体 (`struct_union.cpp`)
- **结构体定义**: 自定义数据类型
- **成员访问**: `.` 和 `->` 操作符
- **结构体数组**: 复合数据结构
- **嵌套结构体**: 结构体的组合使用
- **联合体**: 内存共享的数据结构
- **内存对齐**: 结构体内存布局分析

#### 4. 枚举类型 (`enum_types.cpp`)
- **传统枚举**: C 风格枚举的使用
- **枚举类**: C++11 强类型枚举 (`enum class`)
- **指定值**: 自定义枚举常量值
- **类型安全**: 枚举类型的安全性对比
- **枚举遍历**: 循环访问枚举值

#### 5. 现代 C++ 类型 (`modern_types.cpp`)
- **auto 关键字**: 自动类型推导
- **decltype**: 表达式类型推导
- **std::array**: 现代数组容器
- **std::tuple**: 元组类型的使用
- **std::optional**: 可选值类型 (C++17)
- **std::variant**: 变体类型 (C++17)
- **std::any**: 任意类型容器 (C++17)
- **范围 for**: 现代循环语法
- **初始化列表**: 统一初始化语法

#### 6. 库的使用 (`use_lib/`)
- **模块化设计**: 将功能封装为独立的库
- **头文件组织**: 接口与实现的分离
- **命令行参数**: `argc` 和 `argv` 的处理
- **多文件编译**: 库文件的编译和链接

### 🚀 编译和运行

#### 数据类型示例
```bash
cd 0923/data-type
make all          # 编译所有示例
make run-all      # 运行所有示例
make clean        # 清理编译产物
```

#### 库使用示例
```bash
cd 0923/use_lib
make              # 编译项目
./hello           # 运行程序
./hello arg1 arg2 # 带参数运行
```

---

## 🛠️ 开发环境

### 编译器支持
- **Apple Clang**: macOS 默认编译器
- **GCC**: Homebrew 安装的 GCC 编译器
- **C++ 标准**: 支持 C++11/14/17 特性

### 构建工具
- **Make**: 传统的构建系统
- **Makefile**: 自动化编译配置
- **跨平台**: 支持 macOS/Linux/Windows

### 调试支持
- **调试符号**: `-g` 编译选项
- **警告信息**: `-Wall -Wextra` 编译选项
- **内存检查**: 支持 Valgrind 等工具

---

## 🔗 相关资源

- [C++ Reference](https://cppreference.com/)
- [GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [Clang Documentation](https://clang.llvm.org/docs/)
