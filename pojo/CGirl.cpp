//
// Created by Administrator on 2023/5/28.
//

#include "CGirl.h"

const char *CGirl::getMName() const {
    return m_name;
}

int CGirl::getMAge() const {
    return m_age;
}

void CGirl::setMAge(int mAge) {
    m_age = mAge;
}

void CGirl::showname() {
    cout << "姓名：" << m_name << endl;
}
void CGirl::showage() {
    CGirl h;
    cout << "年龄：" << h.getMAge() << endl;
}

void CGirl::test() {

 CGirl g;
    cout << "对象g占用的内存大小是：" << sizeof(g) << endl;
    cout << "对象g的地址是：" << &g << endl;
    cout << "成员变量m_name的地址是：" << (void*)&g.m_name << endl;
    cout << "成员变量m_age的地址是：" << (void *)&g.m_age << endl;
    cout << "全局变量aaa的地址是：" << (void*)&g << endl;
    cout <<"成员函数showname的地址是：" <<&CGirl::showname<< endl;
    cout <<"成员函数showage的地址是" <<&CGirl::showage<< endl;
  cout<<"函数showage()的地址是："<<&CGirl::showage<<endl;

    CGirl* g1 = nullptr;
    g1->showname();

}