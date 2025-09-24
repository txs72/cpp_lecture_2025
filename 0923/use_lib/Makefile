# Makefile for C++ project with static library
# 项目：研究生C++编程实践课程代码
# 日期：2023年9月23日

# 编译器设置
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11 
AR = ar
ARFLAGS = rcs

# 目录设置
LIB_DIR = lib
SRC_DIR = src
BUILD_DIR = build

# 安装目录设置
PREFIX = /usr/local
LIBDIR = $(PREFIX)/lib
INCLUDEDIR = $(PREFIX)/include

# 库相关设置
LIB_NAME = calc
STATIC_LIB = $(LIB_DIR)/lib$(LIB_NAME).a
LIB_SOURCES = $(LIB_DIR)/$(LIB_NAME).cpp
LIB_OBJECTS = $(LIB_DIR)/$(LIB_NAME).o
LIB_HEADERS = $(LIB_DIR)/$(LIB_NAME).h

# 主程序设置
MAIN_SOURCES = $(SRC_DIR)/hello.cpp
MAIN_OBJECTS = $(SRC_DIR)/hello.o
MAIN_TARGET = $(SRC_DIR)/hello

# 默认目标
.PHONY: all clean lib main help install uninstall

all: lib main

# 帮助信息
help:
	@echo "可用的目标："
	@echo "  all      - 编译库和主程序（默认）"
	@echo "  lib      - 只编译静态库"
	@echo "  main     - 只编译主程序"
	@echo "  install  - 安装库文件到系统目录"
	@echo "  uninstall- 从系统目录卸载库文件"
	@echo "  clean    - 清理所有编译产物"
	@echo "  rebuild  - 清理后重新编译"
	@echo "  test     - 运行程序"
	@echo "  help     - 显示此帮助信息"

# 编译静态库
lib: $(STATIC_LIB)

$(STATIC_LIB): $(LIB_OBJECTS)
	@echo "📦 创建静态库 $@"
	$(AR) $(ARFLAGS) $@ $^
	@echo "✅ 静态库创建完成"

$(LIB_OBJECTS): $(LIB_SOURCES) $(LIB_HEADERS)
	@echo "🔨 编译库对象文件 $@"
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 编译主程序
main: $(MAIN_TARGET)

$(MAIN_TARGET): $(MAIN_OBJECTS) $(STATIC_LIB)
	@echo "🔗 链接主程序 $@"
	$(CXX) $(CXXFLAGS) $< -L$(LIB_DIR) -l$(LIB_NAME) -o $@
	@echo "✅ 主程序编译完成"

$(MAIN_OBJECTS): $(MAIN_SOURCES) $(SRC_DIR)/$(LIB_NAME).h
	@echo "🔨 编译主程序对象文件 $@"
	$(CXX) $(CXXFLAGS) -I$(LIB_DIR) -c $< -o $@

# 运行程序
test: $(MAIN_TARGET)
	@echo "🚀 运行程序："
	@echo "----------------------------------------"
	@$(MAIN_TARGET)
	@echo "----------------------------------------"

# 清理编译产物
clean:
	@echo "🧹 清理编译产物..."
	rm -f $(LIB_OBJECTS) $(STATIC_LIB)
	rm -f $(MAIN_OBJECTS) $(MAIN_TARGET)
	@echo "✅ 清理完成"

# 重新编译
rebuild: clean all

# 安装库文件到系统目录
install: $(STATIC_LIB)
	@echo "📦 安装库文件到系统目录..."
	@echo "需要管理员权限，请输入密码："
	sudo mkdir -p $(LIBDIR)
	sudo mkdir -p $(INCLUDEDIR)
	sudo cp $(STATIC_LIB) $(LIBDIR)/
	sudo cp $(LIB_HEADERS) $(INCLUDEDIR)/
	sudo chmod 644 $(LIBDIR)/lib$(LIB_NAME).a
	sudo chmod 644 $(INCLUDEDIR)/$(LIB_NAME).h
	@echo "✅ 安装完成！"
	@echo "📍 库文件位置: $(LIBDIR)/lib$(LIB_NAME).a"
	@echo "📍 头文件位置: $(INCLUDEDIR)/$(LIB_NAME).h"

# 从系统目录卸载库文件
uninstall:
	@echo "🗑️  从系统目录卸载库文件..."
	@echo "需要管理员权限，请输入密码："
	sudo rm -f $(LIBDIR)/lib$(LIB_NAME).a
	sudo rm -f $(INCLUDEDIR)/$(LIB_NAME).h
	@echo "✅ 卸载完成！"

# 显示编译信息
info:
	@echo "📋 项目信息："
	@echo "  编译器: $(CXX)"
	@echo "  编译选项: $(CXXFLAGS)"
	@echo "  库目录: $(LIB_DIR)"
	@echo "  源码目录: $(SRC_DIR)"
	@echo "  静态库: $(STATIC_LIB)"
	@echo "  主程序: $(MAIN_TARGET)"

# 依赖关系
$(LIB_OBJECTS): $(LIB_HEADERS)
$(MAIN_OBJECTS): $(SRC_DIR)/$(LIB_NAME).h