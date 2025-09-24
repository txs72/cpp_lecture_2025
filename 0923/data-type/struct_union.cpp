#include <iostream>
#include <string>
using namespace std;

// 结构体定义
struct Student {
    int id;
    string name;
    float score;
    char grade;
};

// 嵌套结构体
struct Address {
    string street;
    string city;
    int zipcode;
};

struct Person {
    string name;
    int age;
    Address address;  // 嵌套结构体
};

// 联合体定义
union Data {
    int i;
    float f;
    char c;
};

// 带有联合体的结构体
struct Variant {
    enum Type { INT, FLOAT, CHAR } type;
    union {
        int int_val;
        float float_val;
        char char_val;
    } value;
};

int main() {
    cout << "=== 结构体和联合体类型示例 ===" << endl;
    
    // 结构体基础使用
    cout << "\n--- 结构体基础 ---" << endl;
    
    Student stu1;
    stu1.id = 1001;
    stu1.name = "张三";
    stu1.score = 95.5f;
    stu1.grade = 'A';
    
    cout << "学生信息:" << endl;
    cout << "学号: " << stu1.id << endl;
    cout << "姓名: " << stu1.name << endl;
    cout << "分数: " << stu1.score << endl;
    cout << "等级: " << stu1.grade << endl;
    cout << "结构体大小: " << sizeof(stu1) << " 字节" << endl;
    
    // 结构体初始化
    cout << "\n--- 结构体初始化 ---" << endl;
    
    Student stu2 = {1002, "李四", 88.0f, 'B'};
    cout << "学生2: ID=" << stu2.id << ", 姓名=" << stu2.name 
         << ", 分数=" << stu2.score << ", 等级=" << stu2.grade << endl;
    
    // 结构体数组
    cout << "\n--- 结构体数组 ---" << endl;
    
    Student students[3] = {
        {1001, "张三", 95.5f, 'A'},
        {1002, "李四", 88.0f, 'B'},
        {1003, "王五", 92.3f, 'A'}
    };
    
    cout << "学生列表:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "学号: " << students[i].id << ", 姓名: " << students[i].name 
             << ", 分数: " << students[i].score << ", 等级: " << students[i].grade << endl;
    }
    
    // 嵌套结构体
    cout << "\n--- 嵌套结构体 ---" << endl;
    
    Person person;
    person.name = "赵六";
    person.age = 25;
    person.address.street = "中山路123号";
    person.address.city = "北京";
    person.address.zipcode = 100000;
    
    cout << "个人信息:" << endl;
    cout << "姓名: " << person.name << endl;
    cout << "年龄: " << person.age << endl;
    cout << "地址: " << person.address.street << ", " 
         << person.address.city << ", " << person.address.zipcode << endl;
    cout << "Person 结构体大小: " << sizeof(person) << " 字节" << endl;
    
    // 结构体指针
    cout << "\n--- 结构体指针 ---" << endl;
    
    Student* stu_ptr = &stu1;
    cout << "通过指针访问结构体:" << endl;
    cout << "学号: " << stu_ptr->id << endl;
    cout << "姓名: " << stu_ptr->name << endl;
    cout << "分数: " << (*stu_ptr).score << endl;  // 另一种访问方式
    
    // 联合体基础
    cout << "\n--- 联合体基础 ---" << endl;
    
    Data data;
    cout << "联合体大小: " << sizeof(data) << " 字节" << endl;
    
    data.i = 42;
    cout << "设置 int 值: " << data.i << endl;
    cout << "此时 float 值: " << data.f << endl;
    cout << "此时 char 值: " << (int)data.c << endl;
    
    data.f = 3.14f;
    cout << "设置 float 值: " << data.f << endl;
    cout << "此时 int 值: " << data.i << endl;
    cout << "此时 char 值: " << (int)data.c << endl;
    
    data.c = 'A';
    cout << "设置 char 值: " << data.c << endl;
    cout << "此时 int 值: " << data.i << endl;
    cout << "此时 float 值: " << data.f << endl;
    
    // 带标记的联合体
    cout << "\n--- 带标记的联合体 ---" << endl;
    
    Variant var1, var2, var3;
    
    var1.type = Variant::INT;
    var1.value.int_val = 100;
    
    var2.type = Variant::FLOAT;
    var2.value.float_val = 3.14159f;
    
    var3.type = Variant::CHAR;
    var3.value.char_val = 'X';
    
    Variant variants[] = {var1, var2, var3};
    
    for (int i = 0; i < 3; i++) {
        cout << "变量 " << i + 1 << ": ";
        switch (variants[i].type) {
            case Variant::INT:
                cout << "int 类型，值: " << variants[i].value.int_val << endl;
                break;
            case Variant::FLOAT:
                cout << "float 类型，值: " << variants[i].value.float_val << endl;
                break;
            case Variant::CHAR:
                cout << "char 类型，值: " << variants[i].value.char_val << endl;
                break;
        }
    }
    
    // 内存对齐
    cout << "\n--- 内存对齐信息 ---" << endl;
    
    cout << "Student 结构体各成员大小:" << endl;
    cout << "int id: " << sizeof(int) << " 字节" << endl;
    cout << "string name: " << sizeof(string) << " 字节" << endl;
    cout << "float score: " << sizeof(float) << " 字节" << endl;
    cout << "char grade: " << sizeof(char) << " 字节" << endl;
    cout << "总计: " << sizeof(int) + sizeof(string) + sizeof(float) + sizeof(char) << " 字节" << endl;
    cout << "实际 Student 大小: " << sizeof(Student) << " 字节" << endl;
    
    return 0;
}