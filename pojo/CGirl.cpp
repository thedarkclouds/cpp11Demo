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
    cout << "������" << m_name << endl;
}
void CGirl::showage() {
    CGirl h;
    cout << "���䣺" << h.getMAge() << endl;
}

void CGirl::test() {

 CGirl g;
    cout << "����gռ�õ��ڴ��С�ǣ�" << sizeof(g) << endl;
    cout << "����g�ĵ�ַ�ǣ�" << &g << endl;
    cout << "��Ա����m_name�ĵ�ַ�ǣ�" << (void*)&g.m_name << endl;
    cout << "��Ա����m_age�ĵ�ַ�ǣ�" << (void *)&g.m_age << endl;
    cout << "ȫ�ֱ���aaa�ĵ�ַ�ǣ�" << (void*)&g << endl;
    cout <<"��Ա����showname�ĵ�ַ�ǣ�" <<&CGirl::showname<< endl;
    cout <<"��Ա����showage�ĵ�ַ��" <<&CGirl::showage<< endl;
  cout<<"����showage()�ĵ�ַ�ǣ�"<<&CGirl::showage<<endl;

    CGirl* g1 = nullptr;
    g1->showname();

}