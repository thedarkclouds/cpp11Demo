//
// Created by Administrator on 2023/5/27.
//

#include <sstream>
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
    unsigned long long nLoc = strOutput3.find(strObj);
    // ����������Ӵ����ַ����У����ӡ�Ӵ���λ��
    if (nLoc != string::npos) {
        cout << "nLoc is: " << nLoc << endl;
    }

    cout << "-----------------------string find" << endl;

    string strDemo = "I am";

    strDemo.insert(4, " good.");

    cout << "strDemo is: " << strDemo << endl;
    cout << "-----------------------string insert" << endl;


    // ����1
    int nNum1 = 123;
    stringstream sss;

    sss << nNum1;
    string strTest1 = sss.str();
    cout << "strTest1 is: " << strTest1 << endl;

    /*
    string strTest2;
    strTest2 << ss;     // stringstream δ���� << ���������ʴ˾䱨��
    cout << "strTest2 is: " << strTest2 << endl;
    */

    string strTest3;
    sss >> strTest3;
    cout << "strTest3 is: " << strTest3 << endl;

    // ����2
    int nNum2 = 456;
    string strTest4;
    strTest4 = to_string(nNum2);    // C++11 ��׼
    cout << "strTest4 is: " << strTest4 << endl;
    cout << "-----------------------int����תstring ���ַ���" << endl;

    string ssss = "abcdefg";
    char c = s.back();
    cout << c << endl;
    cout << "----------------------��ȡ���һ���ַ�" << endl;


    char str[20] = "We are happy.";
    replaceSpace(str, 20);
    cout << str << endl;;

    cout << "-----------------------�滻�ַ���д��̫����" << endl;
}

void string_test::replaceSpace(char *str, int length) {
    if (str == nullptr || length <= 0) return;
    int originalLength = 0;
    int numberOfBlank = 0;
    int i = 0;
    while (str[i] != '\0') {
        ++originalLength;
        if (str[i] == ' ') ++numberOfBlank;
        ++i;
    }
    int newLength = originalLength + numberOfBlank * 2;
    if (newLength > length) return;
    int indexOfOriginal = originalLength;
    int indexOfNew = newLength;
    while (indexOfOriginal >= 0 && indexOfNew > indexOfOriginal) {
        if (str[indexOfOriginal] == ' ') {
            str[indexOfNew--] = '0';
            str[indexOfNew--] = '2';
            str[indexOfNew--] = '%';
        } else {
            str[indexOfNew--] = str[indexOfOriginal];
        }
        --indexOfOriginal;
    }
}

void string_test::hytest() {

    string str("string4567890");
    cout << str << endl;
    string str3(str, 11, 4);
    cout << str3 << endl;
    auto s = string(5, 'a');
    cout << "-----------------------string������" << s << endl;

}