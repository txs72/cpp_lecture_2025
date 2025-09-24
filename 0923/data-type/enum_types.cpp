#include <iostream>
using namespace std;

// 传统枚举
enum Color {
    RED,
    GREEN,
    BLUE
};

// 指定值的枚举
enum Status {
    PENDING = 1,
    PROCESSING = 2,
    COMPLETED = 10,
    FAILED = -1
};

// 枚举类（C++11 强类型枚举）
enum class Direction {
    NORTH,
    SOUTH,
    EAST,
    WEST
};

// 指定底层类型的枚举类
enum class Priority : char {
    LOW = 'L',
    MEDIUM = 'M',
    HIGH = 'H'
};

// 用于演示的函数
void printColor(Color c) {
    switch (c) {
        case RED:
            cout << "红色";
            break;
        case GREEN:
            cout << "绿色";
            break;
        case BLUE:
            cout << "蓝色";
            break;
        default:
            cout << "未知颜色";
    }
}

void printDirection(Direction d) {
    switch (d) {
        case Direction::NORTH:
            cout << "北";
            break;
        case Direction::SOUTH:
            cout << "南";
            break;
        case Direction::EAST:
            cout << "东";
            break;
        case Direction::WEST:
            cout << "西";
            break;
    }
}

int main() {
    cout << "=== 枚举类型示例 ===" << endl;
    
    // 传统枚举基础使用
    cout << "\n--- 传统枚举 ---" << endl;
    
    Color myColor = RED;
    cout << "颜色值: " << myColor << " (";
    printColor(myColor);
    cout << ")" << endl;
    
    cout << "枚举值:" << endl;
    cout << "RED = " << RED << endl;
    cout << "GREEN = " << GREEN << endl;
    cout << "BLUE = " << BLUE << endl;
    
    // 枚举可以隐式转换为整数
    int colorValue = myColor;
    cout << "颜色转换为整数: " << colorValue << endl;
    
    // 指定值的枚举
    cout << "\n--- 指定值的枚举 ---" << endl;
    
    Status currentStatus = PROCESSING;
    cout << "当前状态值: " << currentStatus << endl;
    
    cout << "状态枚举值:" << endl;
    cout << "PENDING = " << PENDING << endl;
    cout << "PROCESSING = " << PROCESSING << endl;
    cout << "COMPLETED = " << COMPLETED << endl;
    cout << "FAILED = " << FAILED << endl;
    
    // 枚举在条件判断中的使用
    cout << "\n--- 枚举在条件判断中的使用 ---" << endl;
    
    if (currentStatus == PROCESSING) {
        cout << "任务正在处理中..." << endl;
    }
    
    switch (currentStatus) {
        case PENDING:
            cout << "状态: 等待中" << endl;
            break;
        case PROCESSING:
            cout << "状态: 处理中" << endl;
            break;
        case COMPLETED:
            cout << "状态: 已完成" << endl;
            break;
        case FAILED:
            cout << "状态: 失败" << endl;
            break;
    }
    
    // 枚举类（强类型枚举）
    cout << "\n--- 枚举类（C++11）---" << endl;
    
    Direction dir = Direction::NORTH;
    cout << "方向: ";
    printDirection(dir);
    cout << endl;
    
    // 枚举类需要显式转换为整数
    cout << "方向的整数值: " << static_cast<int>(dir) << endl;
    
    cout << "所有方向的值:" << endl;
    cout << "NORTH = " << static_cast<int>(Direction::NORTH) << endl;
    cout << "SOUTH = " << static_cast<int>(Direction::SOUTH) << endl;
    cout << "EAST = " << static_cast<int>(Direction::EAST) << endl;
    cout << "WEST = " << static_cast<int>(Direction::WEST) << endl;
    
    // 指定底层类型的枚举类
    cout << "\n--- 指定底层类型的枚举类 ---" << endl;
    
    Priority taskPriority = Priority::HIGH;
    cout << "任务优先级: " << static_cast<char>(taskPriority) << endl;
    
    cout << "优先级值:" << endl;
    cout << "LOW = " << static_cast<char>(Priority::LOW) << endl;
    cout << "MEDIUM = " << static_cast<char>(Priority::MEDIUM) << endl;
    cout << "HIGH = " << static_cast<char>(Priority::HIGH) << endl;
    
    cout << "Priority 枚举大小: " << sizeof(Priority) << " 字节" << endl;
    cout << "Color 枚举大小: " << sizeof(Color) << " 字节" << endl;
    
    // 枚举的遍历
    cout << "\n--- 枚举遍历 ---" << endl;
    
    cout << "所有颜色:" << endl;
    for (int i = RED; i <= BLUE; i++) {
        Color c = static_cast<Color>(i);
        cout << "颜色 " << i << ": ";
        printColor(c);
        cout << endl;
    }
    
    cout << "所有方向:" << endl;
    for (int i = 0; i < 4; i++) {
        Direction d = static_cast<Direction>(i);
        cout << "方向 " << i << ": ";
        printDirection(d);
        cout << endl;
    }
    
    // 枚举类型安全性对比
    cout << "\n--- 类型安全性对比 ---" << endl;
    
    // 传统枚举可能的问题
    Color color1 = RED;
    Status status1 = PENDING;
    
    // 注意：传统枚举的类型安全问题
    // 不同枚举类型的比较在逻辑上是错误的，但传统枚举允许这样做
    cout << "传统枚举类型安全问题演示:" << endl;
    cout << "color1 值: " << color1 << ", status1 值: " << status1 << endl;
    cout << "传统枚举允许不同类型比较，但这在逻辑上是错误的！" << endl;
    
    // 枚举类的类型安全
    Direction dir1 = Direction::NORTH;
    Priority pri1 = Priority::LOW;
    cout << "\n枚举类类型安全演示:" << endl;
    cout << "方向: " << static_cast<int>(dir1) << ", 优先级: " << static_cast<int>(pri1) << endl;
    cout << "枚举类不允许不同类型之间的比较，提供更好的类型安全性" << endl;
    // if (dir1 == pri1) {  // 编译错误！不同枚举类不能比较
    //     cout << "方向和优先级相等" << endl;
    // }
    
    cout << "枚举类提供了更好的类型安全性" << endl;
    
    return 0;
}