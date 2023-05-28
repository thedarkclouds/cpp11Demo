//
// Created by Administrator on 2023/5/28.
//

#ifndef CPP11_CGIRL_H
#define CPP11_CGIRL_H

#include <iostream>
#include <cstring>
//C++类中有两种数据成员：nonstatic、static，三种函数成员：nonstatic、static、virtual。
/*对象内存的大小包括：
 * 1）所有非静态数据成员的大小；
 * 2）由内存对齐而填补的内存大小；
 * 3）为了支持virtual成员而产生的额外负担。
静态成员变量属于类，不计算在对象的大小之内。
成员函数是分开存储的，不论对象是否存在都占用存储空间，在内存中只有一个副本，也不计算在对象大小之内。
用空指针可以调用没有用到this指针的非静态成员函数。
对象的地址是第一个非静态成员变量的地址，如果类中没有非静态成员变量，编译器会隐含的增加一个1字节的占位成员。*/





using namespace std;
class CGirl {
public:
    char m_name[10];              // 姓名属性。
     int m_age;                   // 年龄属性。
    // 默认构造函数和析构函数。
    CGirl() {
        memset(m_name, 0, sizeof(m_name));
        m_age = 0;
    }

    ~CGirl() {}

    // 显示超女的姓名。
    void showname();

    // 显示超女的年龄。
    static void showage();

    void setMAge(int mAge);

    const char *getMName() const;
             void test();

    int getMAge() const;
};


#endif //CPP11_CGIRL_H
