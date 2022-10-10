//
// Created by She1ry on 2022/9/30.
//

#include <iostream>

using namespace std;

namespace space1 {
    int num = 1;
}

namespace space2 {
    int num = 2;
}

void fun1(){
    int space1 = 0;
    using space1::num;    //using声明

    cout<<num<< endl;
}
void func2(){
    //相当于打开了两个房间，变量有迷惑性。
    using namespace space1;    //using编译指令
    //using namespace space2;
    cout<<num<<endl;
}

int main(){
    fun1();
    return 0;
}
