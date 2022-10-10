//
// Created by She1ry on 2022/10/1.
//
#include <iostream>

using namespace std;

struct student {
    string name;
    int id;
    wchar_t sex;
};

int main(){
    student stu{
        "jack",
        12,
        L'男',
    };
    cout<<stu.sex;
    return 0;
}