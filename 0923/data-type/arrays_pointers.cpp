#include <iostream>
using namespace std;

int main() {
    cout << "=== 数组和指针类型示例 ===" << endl;
    
    // 一维数组
    cout << "\n--- 一维数组 ---" << endl;
    
    int arr1[5] = {10, 20, 30, 40, 50};
    cout << "数组 arr1: ";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "数组大小: " << sizeof(arr1) << " 字节" << endl;
    cout << "数组元素个数: " << sizeof(arr1) / sizeof(arr1[0]) << endl;
    
    // 字符数组
    char str1[] = "Hello";
    char str2[10] = "World";
    cout << "字符数组 str1: " << str1 << ", 大小: " << sizeof(str1) << " 字节" << endl;
    cout << "字符数组 str2: " << str2 << ", 大小: " << sizeof(str2) << " 字节" << endl;
    
    // 二维数组
    cout << "\n--- 二维数组 ---" << endl;
    
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    cout << "二维数组 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "二维数组大小: " << sizeof(matrix) << " 字节" << endl;
    
    // 指针基础
    cout << "\n--- 指针基础 ---" << endl;
    
    int value = 42;
    int* ptr = &value;
    
    cout << "变量 value: " << value << endl;
    cout << "变量 value 的地址: " << &value << endl;
    cout << "指针 ptr 的值: " << ptr << endl;
    cout << "指针 ptr 指向的值: " << *ptr << endl;
    cout << "指针 ptr 的大小: " << sizeof(ptr) << " 字节" << endl;
    
    // 修改指针指向的值
    *ptr = 100;
    cout << "通过指针修改后，value = " << value << endl;
    
    // 指针运算
    cout << "\n--- 指针运算 ---" << endl;
    
    int numbers[] = {10, 20, 30, 40, 50};
    int* p = numbers;  // 指向数组第一个元素
    
    cout << "数组 numbers: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    cout << "使用指针访问数组元素:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "*(p + " << i << ") = " << *(p + i) << endl;
    }
    
    // 指针与数组的关系
    cout << "\n--- 指针与数组的关系 ---" << endl;
    
    cout << "数组名 numbers: " << numbers << endl;
    cout << "&numbers[0]: " << &numbers[0] << endl;
    cout << "指针 p: " << p << endl;
    cout << "numbers == p: " << (numbers == p ? "true" : "false") << endl;
    
    // 字符指针
    cout << "\n--- 字符指针 ---" << endl;
    
    const char* str_ptr = "Hello, World!";
    cout << "字符指针 str_ptr: " << str_ptr << endl;
    cout << "字符指针指向的字符: " << *str_ptr << endl;
    
    // 空指针
    cout << "\n--- 空指针 ---" << endl;
    
    int* null_ptr = nullptr;
    cout << "空指针 null_ptr: " << null_ptr << endl;
    
    if (null_ptr == nullptr) {
        cout << "null_ptr 是空指针" << endl;
    }
    
    // 指针的指针
    cout << "\n--- 指针的指针 ---" << endl;
    
    int val = 123;
    int* ptr1 = &val;
    int** ptr2 = &ptr1;
    
    cout << "val = " << val << endl;
    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "**ptr2 = " << **ptr2 << endl;
    cout << "ptr1 的地址: " << &ptr1 << endl;
    cout << "ptr2 的值: " << ptr2 << endl;
    
    return 0;
}