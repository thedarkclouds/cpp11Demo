//
// Created by Administrator on 2023/5/27.
//

#include "array_test.h"
#include <iostream>

using namespace std;

void array_test::test() {
    int arr[5];
    int arr1[5] = {1, 2, 3, 4, 5}; // ?????????5?????????????飬????????1,2,3,4,5
    int arr2[] = {1, 2, 3, 4, 5}; // ???????????5?????????????飬????????1,2,3,4,5
    cout << "?????----------------------------" << endl;
    int arr3[5] = {1, 2, 3, 4, 5};
    cout << arr3[0] << endl; // ????????????????????1
    cout << "????----------------------------" << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr3[i] << endl; // ???????????????
    }
    cout << "for???----------------------------" << endl;

    int arr4[5] = {1, 2, 3, 4, 5};
    arr4[0] = 6; // ???????????????????6
     cout << "??????----------------------------??" <<arr4[0]<< endl;
}

void array_test::hytest() {
    int arr[5];//声明
    cout<<arr<<endl;
    arr[0]=1;
    arr[1]=2;
    cout<<arr<<endl;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i) {
        cout<<"传统for循环"<<arr[i]<<endl;
    }
    for (int entity:arr) {
        cout<<"c++11 for 循环"<<entity<<endl;
    }

    int arrinit[5]={2,3,4,5,6};

    for (int entity:arrinit) {
        cout<<"c++11 for 循环  "<<entity<<endl;
    }
}