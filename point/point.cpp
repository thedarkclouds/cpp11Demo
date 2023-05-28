//
// Created by Administrator on 2023/5/28.
//

#include "point.h"


void point::test() {


}


void point::func(int *no, string *str)    // 向超女表白的函数。
{
    cout << "亲爱的" << *no << "号：" << *str << endl;
    *no = 8;
    *str = "我有一只小小鸟。";
}


// 显示变量的十六进制地址的函数：varname-变量名，p-变量的地址。
//的形参用void *，表示接受任意数据类型的指针。
/*
 不能用void声明变量，它不能代表一个真实的变量，但是，用void *可以。
不能对void *指针直接解引用（需要转换成其它类型的指针）。
把其它类型的指针赋值给void*指针不需要转换。
把void *指针赋值给把其它类型的指针需要转换。
 */
void point::func(string varname, void *p) {
    cout << varname << "的地址是：" << p << endl;
    cout << varname << "的值是：" << *(char *) p << endl;
}


void point::new_test(){
// 1）声明一个指针；
    // 2）用new运算符向系统申请一块内存，让指针指向这块内存；
    // 3）通过对指针解引用的方法，像使用变量一样使用这块内存；
    // 4）如果这块内存不用了，用delete运算符释放它。
    // 申请内存的语法：new 数据类型(初始值);   // C++11支持{}
    // 释放内存的语法：delete 地址;
    int *p = new int(5);
    cout << "*p=" << *p << endl;
    *p = 8;
    cout << "*p=" << *p << endl;
    delete p;

    	for (int ii = 1; ii > 0; ii++)
    {
        int* p = new int[100000];     // 一次申请100000个整数，这个语法以后再讲。
        cout << "ii="<<ii<<",p=" << p << endl;
    }





}


//空指针
/*在C和C++中，用0或NULL都可以表示空指针。
声明指针后，在赋值之前，让它指向空，表示没有指向任何地址。*/

/*用0和NULL表示空指针会产生歧义，C++11建议用nullptr表示空指针，也就是(void *)0。
NULL在C++中就是0，这是因为在C++中void* 类型是不允许隐式转换成其他类型的，
所以之前C++中用0来代表空指针，但是在重载整形的情况下，会出现上述的问题。
所以，C++11加入了nullptr，可以保证在任何情况下都代表空指针，而不会出现上述的情况，
因此，建议用nullptr替代NULL吧，而NULL就当做0使用。*/



void point::nullptr_test(){


}