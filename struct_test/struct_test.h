//
// Created by Administrator on 2023/5/28.
//

#ifndef CPP11_STRUCT_TEST_H
#define CPP11_STRUCT_TEST_H

//结构体是一种自定义的数据类型，用结构体可以创建结构体变量。
class struct_test {
    // 体重（kg）。
    // 颜值：true-漂亮；false-不漂亮。
public:
    char name[21];
    char sex;
// 姓名。
    int age;
// 性别：X-女；Y-男。
    bool yz;
// 年龄。
    double weight;
//如果结构体中有一个本结构体的指针，它就是链表。
    struct st_girl *next;
};

#endif //CPP11_STRUCT_TEST_H
