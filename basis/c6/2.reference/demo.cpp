#include <iostream>

int main(){
    using namespace std;
    int num=3, num2=4;
    int &a=num;    //引用就相当于一个const指针，绑定变量后不可以更换。
    a = num2;    //实际更改的是num的值，并不会修改引用指向

 /*
  *    左值引用，不能接受多项表达式以及字面量
  *    而用const修饰的左值引用，会创建一个临时变量并将其引用传递
  */
    int &b = num+3;    //err
    const int &c = num+3;    //correct
    return 0;
}
