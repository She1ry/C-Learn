//
// Created by She1ry on 2022/10/1.
//
#include <iostream>

using namespace std;

void func1(){
    //1.初始化
    int num(2);
    int num2{};
    int num3{16};
    float f{};    //列表初始化：按照类型默认初始化的简单方式
    cout<<num3<<endl;
    cout<<"float:"<<f<<endl;
    //2.标识符控制输出进制
    cout<<hex<<"16进制："<<num3<<"  8进制："<<oct<<num3;
}

void char_(){
    char ch;
    cout<<"输入一个字符：";
    cin>>ch;
    cout.put(ch);


    //2.宽字符
    wchar_t ch1 = L'P';
    cout<<endl<<ch1<<";";
    wcout<<ch1;
}

void func2(){
    int num = int(99.9);    //类型转换
    // int num = {9.9}    not allowed；列表初始化不可以缩窄操作
}

int main(){
//    func1();
//    char_();
 cout<< sizeof(int);
}


