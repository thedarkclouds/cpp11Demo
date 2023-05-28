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
    size_t nLoc = strOutput.find(strObj);
    // 如果检索到子串在字符串中，则打印子串的位置
    if (nLoc != string::npos)
    {
        cout << "nLoc is: " << nLoc << endl;
    }





}