//
// Created by Administrator on 2023/5/27.
//

#include "string_test.h"
#include "iostream"

#define HELLOSTR "Hello World"
using namespace std;

void string_test::test() {

    auto s = string(5, 'a');
//TODO
    string str2("Now is the time...");
    string str3(str2, 11, 4);
    cout << str2 << endl;
    cout << str3 << endl;
    cout << "-----------------------string������" << s << endl;


    string strOutput = "Hello World";

    cout << "[cout] strOutput is: " << strOutput << endl;

    // string ת��Ϊ char*
    const char *pszOutput = strOutput.c_str();

    printf("[printf] strOutput is: %s\n", pszOutput);
    cout << "-----------------------string ת��Ϊ char*" << endl;


    string strOutput2 = "Hello World";

    int nLen = strOutput2.length();

    cout << "the length of strOutput is: " << nLen << endl;

    if (0 == strOutput2.compare(HELLOSTR)) {
        cout << "strOutput equal with macro HELLOSTR" << endl;
    }
    cout << "-----------------------����string���ȡ�string�ַ����Ƚ�" << endl;


    string ff = "";
    if (!ff.empty()) {
        cout << ff << endl;
    } else {

        cout << ff.append("666") << endl;
    }
    cout << "-----------------------string�����п�" << endl;

    //char*��char[]ת��Ϊstring
    const char *pszname = "sdefkmodsalkfmasl";
    char pszcamp[] = "aaaaaa";
    string str_name;
    string str_camp;
    str_name = pszname;
    str_camp = pszcamp;
    cout << "strName is: " << str_name << endl;
    cout << "strCamp is: " << str_camp << endl;
    cout << "-----------------------char*��char[]ת��Ϊstring" << endl;

//string���find����
    // ���������ַ���
    string strOutput3 = "|0|1|2|";
    // ��Ҫ�������Ӵ�
    string strObj = "|1|";
    // �Ӵ�λ���ַ����е�λ��
    size_t nLoc = strOutput.find(strObj);
    // ����������Ӵ����ַ����У����ӡ�Ӵ���λ��
    if (nLoc != string::npos)
    {
        cout << "nLoc is: " << nLoc << endl;
    }





}