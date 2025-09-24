#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;

int main() {
    cout << "=== C++ 基本数据类型示例 ===" << endl;
    
    // 整数类型
    cout << "\n--- 整数类型 ---" << endl;
    
    // char 类型
    char ch = 'A';
    cout << "char: " << ch << ", 大小: " << sizeof(ch) << " 字节" << endl;
    cout << "char 范围: " << CHAR_MIN << " ~ " << CHAR_MAX << endl;
    
    // short 类型
    short s = 32767;
    cout << "short: " << s << ", 大小: " << sizeof(s) << " 字节" << endl;
    cout << "short 范围: " << SHRT_MIN << " ~ " << SHRT_MAX << endl;
    
    // int 类型
    int i = 2147483647;
    cout << "int: " << i << ", 大小: " << sizeof(i) << " 字节" << endl;
    cout << "int 范围: " << INT_MIN << " ~ " << INT_MAX << endl;
    
    // long 类型
    long l = 9223372036854775807L;
    cout << "long: " << l << ", 大小: " << sizeof(l) << " 字节" << endl;
    cout << "long 范围: " << LONG_MIN << " ~ " << LONG_MAX << endl;
    
    // long long 类型
    long long ll = 9223372036854775807LL;
    cout << "long long: " << ll << ", 大小: " << sizeof(ll) << " 字节" << endl;
    cout << "long long 范围: " << LLONG_MIN << " ~ " << LLONG_MAX << endl;
    
    // 无符号整数类型
    cout << "\n--- 无符号整数类型 ---" << endl;
    
    unsigned char uch = 255;
    cout << "unsigned char: " << (int)uch << ", 大小: " << sizeof(uch) << " 字节" << endl;
    cout << "unsigned char 范围: 0 ~ " << UCHAR_MAX << endl;
    
    unsigned int ui = 4294967295U;
    cout << "unsigned int: " << ui << ", 大小: " << sizeof(ui) << " 字节" << endl;
    cout << "unsigned int 范围: 0 ~ " << UINT_MAX << endl;
    
    // 浮点类型
    cout << "\n--- 浮点类型 ---" << endl;
    
    float f = 3.14159f;
    cout << "float: " << f << ", 大小: " << sizeof(f) << " 字节" << endl;
    cout << "float 精度: " << FLT_DIG << " 位" << endl;
    cout << "float 范围: " << FLT_MIN << " ~ " << FLT_MAX << endl;
    
    double d = 3.141592653589793;
    cout << "double: " << d << ", 大小: " << sizeof(d) << " 字节" << endl;
    cout << "double 精度: " << DBL_DIG << " 位" << endl;
    cout << "double 范围: " << DBL_MIN << " ~ " << DBL_MAX << endl;
    
    long double ld = 3.141592653589793238L;
    cout << "long double: " << ld << ", 大小: " << sizeof(ld) << " 字节" << endl;
    cout << "long double 精度: " << LDBL_DIG << " 位" << endl;
    
    // 布尔类型
    cout << "\n--- 布尔类型 ---" << endl;
    
    bool b1 = true;
    bool b2 = false;
    cout << "bool true: " << b1 << ", 大小: " << sizeof(b1) << " 字节" << endl;
    cout << "bool false: " << b2 << ", 大小: " << sizeof(b2) << " 字节" << endl;
    
    // 类型转换示例
    cout << "\n--- 类型转换示例 ---" << endl;
    
    int int_val = 65;
    char char_val = (char)int_val;
    cout << "int " << int_val << " 转换为 char: '" << char_val << "'" << endl;
    
    double double_val = 3.14159;
    int truncated = (int)double_val;
    cout << "double " << double_val << " 转换为 int: " << truncated << endl;
    
    return 0;
}