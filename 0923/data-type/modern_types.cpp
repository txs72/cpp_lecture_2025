#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <tuple>
#include <optional>
#include <variant>
#include <any>
#include <typeinfo>
using namespace std;

int main() {
    cout << "=== C++现代数据类型示例 ===" << endl;
    
    // auto 关键字
    cout << "\n--- auto 关键字 ---" << endl;
    
    auto int_var = 42;              // 推导为 int
    auto double_var = 3.14;         // 推导为 double
    auto string_var = "Hello";      // 推导为 const char*
    auto string_obj = string("World"); // 推导为 string
    
    cout << "auto int_var = " << int_var << " (类型: " << typeid(int_var).name() << ")" << endl;
    cout << "auto double_var = " << double_var << " (类型: " << typeid(double_var).name() << ")" << endl;
    cout << "auto string_var = " << string_var << " (类型: " << typeid(string_var).name() << ")" << endl;
    cout << "auto string_obj = " << string_obj << " (类型: " << typeid(string_obj).name() << ")" << endl;
    
    // decltype 关键字
    cout << "\n--- decltype 关键字 ---" << endl;
    
    int x = 10;
    decltype(x) y = 20;  // y 的类型与 x 相同
    decltype(x + y) z = x + y;  // z 的类型是 x + y 的结果类型
    
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    cout << "decltype(x) 类型: " << typeid(decltype(x)).name() << endl;
    cout << "decltype(x + y) 类型: " << typeid(decltype(x + y)).name() << endl;
    
    // std::array (C++11)
    cout << "\n--- std::array ---" << endl;
    
    array<int, 5> arr = {1, 2, 3, 4, 5};
    cout << "std::array: ";
    for (const auto& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
    cout << "数组大小: " << arr.size() << endl;
    cout << "数组最大大小: " << arr.max_size() << endl;
    cout << "第一个元素: " << arr.front() << ", 最后一个元素: " << arr.back() << endl;
    
    // std::tuple (C++11)
    cout << "\n--- std::tuple ---" << endl;
    
    tuple<int, string, double> person_info = make_tuple(25, "张三", 175.5);
    
    cout << "元组信息: ";
    cout << "年龄: " << get<0>(person_info) << ", ";
    cout << "姓名: " << get<1>(person_info) << ", ";
    cout << "身高: " << get<2>(person_info) << endl;
    
    // 结构化绑定 (C++17)
    auto [age, name, height] = person_info;
    cout << "结构化绑定: 年龄=" << age << ", 姓名=" << name << ", 身高=" << height << endl;
    
    // std::optional (C++17)
    cout << "\n--- std::optional ---" << endl;
    
    optional<int> opt_value = 42;
    optional<int> empty_opt;
    
    if (opt_value.has_value()) {
        cout << "opt_value 有值: " << opt_value.value() << endl;
    }
    
    if (!empty_opt.has_value()) {
        cout << "empty_opt 没有值" << endl;
    }
    
    // 使用 value_or 提供默认值
    cout << "opt_value.value_or(0): " << opt_value.value_or(0) << endl;
    cout << "empty_opt.value_or(100): " << empty_opt.value_or(100) << endl;
    
    // std::variant (C++17)
    cout << "\n--- std::variant ---" << endl;
    
    variant<int, string, double> var_data;
    
    var_data = 42;
    cout << "variant 存储 int: " << get<int>(var_data) << endl;
    
    var_data = string("Hello");
    cout << "variant 存储 string: " << get<string>(var_data) << endl;
    
    var_data = 3.14;
    cout << "variant 存储 double: " << get<double>(var_data) << endl;
    
    // 检查当前存储的类型
    cout << "当前存储的类型索引: " << var_data.index() << endl;
    
    // 使用 visit 访问 variant
    visit([](const auto& value) {
        cout << "variant 当前值: " << value << " (类型: " << typeid(value).name() << ")" << endl;
    }, var_data);
    
    // std::any (C++17)
    cout << "\n--- std::any ---" << endl;
    
    any any_value;
    
    any_value = 42;
    cout << "any 存储 int: " << any_cast<int>(any_value) << endl;
    
    any_value = string("World");
    cout << "any 存储 string: " << any_cast<string>(any_value) << endl;
    
    any_value = 2.718;
    cout << "any 存储 double: " << any_cast<double>(any_value) << endl;
    
    // 检查 any 是否有值
    if (any_value.has_value()) {
        cout << "any 有值，类型: " << any_value.type().name() << endl;
    }
    
    // 范围 for 循环 (C++11)
    cout << "\n--- 范围 for 循环 ---" << endl;
    
    vector<string> fruits = {"苹果", "香蕉", "橙子", "葡萄"};
    
    cout << "水果列表: ";
    for (const auto& fruit : fruits) {
        cout << fruit << " ";
    }
    cout << endl;
    
    // 初始化列表 (C++11)
    cout << "\n--- 初始化列表 ---" << endl;
    
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "使用初始化列表创建 vector: ";
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // 统一初始化语法
    struct Point {
        int x, y;
    };
    
    Point p1{10, 20};  // 统一初始化
    Point p2 = {30, 40};  // 也是统一初始化
    
    cout << "点 p1: (" << p1.x << ", " << p1.y << ")" << endl;
    cout << "点 p2: (" << p2.x << ", " << p2.y << ")" << endl;
    
    // nullptr (C++11)
    cout << "\n--- nullptr ---" << endl;
    
    int* ptr1 = nullptr;
    int* ptr2 = NULL;  // 旧式写法
    
    cout << "ptr1 (nullptr): " << ptr1 << endl;
    cout << "ptr2 (NULL): " << ptr2 << endl;
    
    if (ptr1 == nullptr) {
        cout << "ptr1 是空指针" << endl;
    }
    
    // 类型别名 (C++11)
    cout << "\n--- 类型别名 ---" << endl;
    
    using IntVector = vector<int>;
    using StringMap = vector<pair<string, string>>;
    
    IntVector vec = {1, 2, 3, 4, 5};
    StringMap map_like = {{"key1", "value1"}, {"key2", "value2"}};
    
    cout << "IntVector: ";
    for (const auto& val : vec) {
        cout << val << " ";
    }
    cout << endl;
    
    cout << "StringMap: ";
    for (const auto& pair : map_like) {
        cout << "[" << pair.first << "->" << pair.second << "] ";
    }
    cout << endl;
    
    return 0;
}