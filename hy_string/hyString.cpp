//
// Created by Administrator on 2025/5/6/周二.
//

#include "hyString.h"
#include "iostream"
#include <cstring>

void hyString::test() {
/*    必须添加 \0 的场景
    当字符数组需要作为 ​字符串 使用时（例如通过 std::cout 输出、调用
    strlen/strcpy 等字符串处理函数），​必须显式添加 \0。
    ​原因：C/C++ 的字符串处理逻辑依赖 \0
    判断字符串结束。若缺失 \0，函数会继续读取后续内存（可能是乱码或非法地址），导致未定义行为（如崩溃、乱码）。*/

    char greeting11[6] = {'H', 'e', 'l', 'l', 'o', '\0'};  // 正确
    std::cout << greeting11 << std::endl; // 正常输出 "Hello"

    /* 字符串常量初始化：
     通过字符串常量初始化字符数组（如 char s[] = "Hello";），编译器会自动添加 \0，此时数组长度为 6（而非 5）。
     ​手动添加 \0 的规范：
     若通过花括号初始化字符数组且需作为字符串使用，需显式添加 \0*/

    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << greeting << std::endl;

    char greeting1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};  // 正确
    std::cout << greeting1 << std::endl; // 正常输出 "Hello"

    char arr[3] = {'A', 'B', 'C'};  // 合法
    for (int i = 0; i < 3; ++i) {
        std::cout << arr[i] << std::endl;  // 逐个输出字符，无需 `\0`
    }


    /*  *\0 的作用**：确保字符串正确终止，避免越界读取。
      ​输出粘连原因：未换行导致连续输出，与 \0 无关。
      ​最佳实践：字符串操作优先使用 std::string，避免手动处理 \0*/


/*    ++ 支持多种操作以空字符结尾的字符串的函数。这些函数定义在<string.h> 头文件中。

    strcpy（s1，s2）；
    将字符串 s2 复制到字符串 s1 中。

    strcat(s1，s2);
    将字符串 s2 连接到字符串 s1 的末尾。

    strlen(s1);
    返回字符串 s1 的长度。

    strcmp(s1，s2);
    如果 s1 和 s2 相同，则返回 0；如果 s1<s2，则返回小于 0；如果 s1>s2，则返回大于 0。

    strchr(s1， ch);
    返回指向字符串 s1 中第一次出现字符 ch 的指针。

    strstr(s1，s2);
    返回指向字符串 s1 中第一次出现字符串 s2 的指针。*/

/*
#include <cstring>使用场景
    底层内存操作：<cstring> 提供的函数如 memcpy、memset、memcmp 等，
    适用于需要直接操作内存的场景（如二进制数据处理、网络协议解析等）。例如，
    网页3提到，memset 常用于初始化内存块为特定值，memcpy 用于高效拷贝内存区域

    ​C风格字符串处理：若需要与C语言库或遗留代码交互，或处理固定长度的字符数组（如嵌入式开发）
    ，strlen、strcpy、strcat 等函数仍有必要使用。
    网页1和网页4均展示了使用这些函数操作char数组的示例

    优先使用std::string：在大多数文本处理场景下，std::string是更优选择。
    网页7提到，std::string的易用性和安全性使其成为主流。
    ​仅在必要时使用<cstring>：当涉及底层内存管理、性能敏感型代码，
    或与C语言接口兼容时，可保留对<cstring>的使用。
    例如，网页6指出，处理二进制数据可能需要结合<vector>和<cstring>

}​安全性问题：<cstring>函数（如strcpy）易导致缓冲区溢出，
需手动检查边界。网页8特别提醒，推荐使用strncpy、strncat等带长度限制的函数以减少风险。
​跨平台兼容性：<cstring>的函数在不同平台和编译器中行为一致，适合跨平台项目
 */


char str1[10]="hello";
char str2[10]="world";
char str3[10];
int len;
    std::cout << "strlen(str1) : " <<  strlen(str1) <<  std::endl;

    strcpy(str3 , str1); //将字符串 s2 复制到字符串 s1 中。
    std::cout << "strcpy( str3, str1) : " << str3 << std::endl;


    strcat(str1,str2); //将字符串 s2 连接到字符串 s1 的末尾。

    std::cout << "strcat( str1, str2): " << str1 << std::endl;

    len = strlen(str1);
    std::cout << "strlen(str1) : " << len <<  std::endl;



















 //https://docs.qq.com/aio/DVkN2RWhQb1hiaXVh?AIGenerate=1&p=0zV45p0Dp56TwTooiuCSac

   //https://docs.qq.com/aio/DVnpUUWtXQ1BXRVNR?AIGenerate=1&p=ddTBn18TtEnLCGKaisr8cU

   // https://www.tutorialspoint.com/cplusplus/cpp_strings.htm
}