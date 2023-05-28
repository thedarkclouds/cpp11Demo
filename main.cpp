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


    void (*pfunc)(int, string);  // ��������ָ��
    pfunc = &func_point::pfunc;  // ��pfunc�ĵ�ַ��ֵΪ��func_point�ľ�̬��Ա����pfunc�ĵ�ַ
    pfunc(5, "dd");  // ���ú���ָ��ָ��ĺ���
    cout << "-----------------------" << endl;


    struct_test st_girl{"��ʩ",26,static_cast<int>(33.8),static_cast<bool>('X'),true};        // �����ṹ�������

    cout << "sizeof(st_girl)=" << sizeof(st_girl) << endl;

    memset(&st_girl, 0, sizeof(st_girl));

    cout << "������" << st_girl.name << "�����䣺" << st_girl.age << "�����أ�" << st_girl.weight
         << "���Ա�" << st_girl.sex << "����ֵ��" << st_girl.yz << endl;
    cout << "-----------------------" << endl;

    CGirl JK;
    JK.test();
    cout << "-----------------------" << endl;



    return 0;
}
