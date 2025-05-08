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
    cout << "-----------------------string构造器" << s << endl;


    string strOutput = "Hello World";

    cout << "[cout] strOutput is: " << strOutput << endl;

    // string 转换为 char*
    const char *pszOutput = strOutput.c_str();

    printf("[printf] strOutput is: %s\n", pszOutput);
    cout << "-----------------------string 转换为 char*" << endl;


    string strOutput2 = "Hello World";

    int nLen = strOutput2.length();

    cout << "the length of strOutput is: " << nLen << endl;

    if (0 == strOutput2.compare(HELLOSTR)) {
        cout << "strOutput equal with macro HELLOSTR" << endl;
    }
    cout << "-----------------------计算string长度、string字符串比较" << endl;


    string ff = "";
    if (!ff.empty()) {
        cout << ff << endl;
    } else {

        cout << ff.append("666") << endl;
    }
    cout << "-----------------------string对象判空" << endl;

    //char*、char[]转换为string
    const char *pszname = "sdefkmodsalkfmasl";
    char pszcamp[] = "aaaaaa";
    string str_name;
    string str_camp;
    str_name = pszname;
    str_camp = pszcamp;
    cout << "strName is: " << str_name << endl;
    cout << "strCamp is: " << str_camp << endl;
    cout << "-----------------------char*、char[]转换为string" << endl;

//string类的find方法
    // 待检索的字符串
    string strOutput3 = "|0|1|2|";
    // 需要检索的子串
    string strObj = "|1|";
    // 子串位于字符串中的位置
    unsigned long long nLoc = strOutput3.find(strObj);
    // 如果检索到子串在字符串中，则打印子串的位置
    if (nLoc != string::npos) {
        cout << "nLoc is: " << nLoc << endl;
    }

    cout << "-----------------------string find" << endl;

    string strDemo = "I am";

    strDemo.insert(4, " good.");

    cout << "strDemo is: " << strDemo << endl;
    cout << "-----------------------string insert" << endl;


    // 方法1
    int nNum1 = 123;
    stringstream sss;

    sss << nNum1;
    string strTest1 = sss.str();
    cout << "strTest1 is: " << strTest1 << endl;

    /*
    string strTest2;
    strTest2 << ss;     // stringstream 未定义 << 操作符，故此句报错
    cout << "strTest2 is: " << strTest2 << endl;
    */

    string strTest3;
    sss >> strTest3;
    cout << "strTest3 is: " << strTest3 << endl;

    // 方法2
    int nNum2 = 456;
    string strTest4;
    strTest4 = to_string(nNum2);    // C++11 标准
    cout << "strTest4 is: " << strTest4 << endl;
    cout << "-----------------------int类型转string 两种方法" << endl;

    string ssss = "abcdefg";
    char c = s.back();
    cout << c << endl;
    cout << "----------------------获取最后一个字符" << endl;


    char str[20] = "We are happy.";
    replaceSpace(str, 20);
    cout << str << endl;;

    cout << "-----------------------替换字符，写法太复杂" << endl;
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
    cout << "-----------------------string构造器" << s << endl;

}