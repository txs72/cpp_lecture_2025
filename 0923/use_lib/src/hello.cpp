#include <iostream>
using namespace std;
#include "calc.h"

#define MAX 10

int main(int argc, char** argv){
    cout << "Hello, world!" << endl;
    cout << "MAX = " << MAX << endl;
    
    // 命令行参数访问示例
    cout << "\n=== 命令行参数信息 ===" << endl;
    cout << "参数个数 argc = " << argc << endl;
    cout << "程序名称: " << argv[0] << endl;
    
    if (argc > 1) {
        cout << "传入的参数:" << endl;
        for (int i = 1; i < argc; i++) {
            cout << "  argv[" << i << "] = " << argv[i] << endl;
        }
    } else {
        cout << "没有传入额外参数" << endl;
        cout << "使用方法: " << argv[0] << " [参数1] [参数2] ..." << endl;
    }
    
    cout << "\n=== 计算示例 ===" << endl;
    int a;
    a = 10; 
    int b = 20;
    int c = add(a, b);
    cout << "c = " << c << endl;
    int d = multiply(a, b);
    cout << "d = " << d << endl;
    return 0;
}
// 预处理
// 编译
// 链接

