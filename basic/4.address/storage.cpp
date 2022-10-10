//
// Created by She1ry on 2022/10/2.
//

//内存泄露
void func1();

/*
    (*)静态存储：作用于整个程序周期
    (**)自动存储：作用于所在代码块，存储于栈中。自动销毁，后进先出
    (***)动态存储：由new，delete确定周期。存储于堆
 */

int num = 3;    //*

int main(){
    static int num2 = 4;    //*
    int num3 = 5;    //**
    int *num4 = new int;    //***
}

void func1(){
    int number1 = 1;
    int* number = new int;
    *number = 1;
    number = &number1;    //指针指向了别的值，而原值无法再访问，造成了内存泄露
}