#include <iostream>
#include <cstring>
#include "array/array_test.h"
#include "string/string_test.h"
#include "point/point.h"
#include "point/func_point.h"
#include "struct_test/struct_test.h"
#include "pojo/CGirl.h"

int main() {
    std::cout << "Hello, World!" << std::endl;


    array_test t;
    //t.test();
    string_test h;
    //h.test();

    point p;
    //p.new_test();


    void (*pfunc)(int, string);  // 声明函数指针
    pfunc = &func_point::pfunc;  // 将pfunc的地址赋值为类func_point的静态成员函数pfunc的地址
    pfunc(5, "dd");  // 调用函数指针指向的函数
    cout << "-----------------------" << endl;


    struct_test st_girl{"西施",26,static_cast<int>(33.8),static_cast<bool>('X'),true};        // 创建结构体变量。

    cout << "sizeof(st_girl)=" << sizeof(st_girl) << endl;

    memset(&st_girl, 0, sizeof(st_girl));

    cout << "姓名：" << st_girl.name << "，年龄：" << st_girl.age << "，体重：" << st_girl.weight
         << "，性别：" << st_girl.sex << "，颜值：" << st_girl.yz << endl;
    cout << "-----------------------" << endl;

    CGirl JK;
    JK.test();
    cout << "-----------------------" << endl;



    return 0;
}
