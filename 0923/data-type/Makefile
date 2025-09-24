# 数据类型示例程序 Makefile

# 编译器设置
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -g

# 目标文件
TARGETS = basic_types arrays_pointers struct_union enum_types modern_types

# 默认目标
all: $(TARGETS)
	@echo "✅ 所有数据类型示例程序编译完成"

# 编译规则
basic_types: basic_types.cpp
	@echo "🔨 编译基本数据类型示例..."
	$(CXX) $(CXXFLAGS) -o $@ $<

arrays_pointers: arrays_pointers.cpp
	@echo "🔨 编译数组和指针示例..."
	$(CXX) $(CXXFLAGS) -o $@ $<

struct_union: struct_union.cpp
	@echo "🔨 编译结构体和联合体示例..."
	$(CXX) $(CXXFLAGS) -o $@ $<

enum_types: enum_types.cpp
	@echo "🔨 编译枚举类型示例..."
	$(CXX) $(CXXFLAGS) -o $@ $<

modern_types: modern_types.cpp
	@echo "🔨 编译现代C++类型示例..."
	$(CXX) $(CXXFLAGS) -o $@ $<

# 运行所有示例
run-all: $(TARGETS)
	@echo "\n=== 运行所有数据类型示例 ==="
	@echo "\n--- 基本数据类型 ---"
	./basic_types
	@echo "\n--- 数组和指针 ---"
	./arrays_pointers
	@echo "\n--- 结构体和联合体 ---"
	./struct_union
	@echo "\n--- 枚举类型 ---"
	./enum_types
	@echo "\n--- 现代C++类型 ---"
	./modern_types

# 单独运行示例
run-basic: basic_types
	./basic_types

run-arrays: arrays_pointers
	./arrays_pointers

run-struct: struct_union
	./struct_union

run-enum: enum_types
	./enum_types

run-modern: modern_types
	./modern_types

# 清理
clean:
	@echo "🧹 清理编译产物..."
	rm -f $(TARGETS)
	@echo "🧹 清理调试符号目录 (仅Mac系统)..."
	rm -rf *.dSYM
	@echo "✅ 清理完成"

# 重新编译
rebuild: clean all

# 帮助信息
help:
	@echo "数据类型示例程序 Makefile"
	@echo ""
	@echo "可用目标:"
	@echo "  all          - 编译所有示例程序"
	@echo "  basic_types  - 编译基本数据类型示例"
	@echo "  arrays_pointers - 编译数组和指针示例"
	@echo "  struct_union - 编译结构体和联合体示例"
	@echo "  enum_types   - 编译枚举类型示例"
	@echo "  modern_types - 编译现代C++类型示例"
	@echo ""
	@echo "  run-all      - 运行所有示例程序"
	@echo "  run-basic    - 运行基本数据类型示例"
	@echo "  run-arrays   - 运行数组和指针示例"
	@echo "  run-struct   - 运行结构体和联合体示例"
	@echo "  run-enum     - 运行枚举类型示例"
	@echo "  run-modern   - 运行现代C++类型示例"
	@echo ""
	@echo "  clean        - 清理编译产物"
	@echo "  rebuild      - 重新编译所有程序"
	@echo "  help         - 显示此帮助信息"

# 声明伪目标
.PHONY: all run-all run-basic run-arrays run-struct run-enum run-modern clean rebuild help