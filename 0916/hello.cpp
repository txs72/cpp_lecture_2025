#include <iostream>
using namespace std;
#include "add.h"

#define MAX 10

int main(int argc, char** argv){
    cout << "Hello, world!" << endl;
    cout << "MAX = " << MAX << endl;
    int a;
    a = 10; 
    int b = 20;
    int c = add(a, b);
    cout << "c = " << c << endl;
    return 0;
}
// 预处理
// 编译
// 链接

