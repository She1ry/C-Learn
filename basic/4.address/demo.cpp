//
// Created by She1ry on 2022/10/2.
//
#include <iostream>

using namespace std;

//1.&与*
void func1();
//2. 指针更多的是在运行阶段分配内存
void func2();
//3.指针数组与指针计算
void func3();
//4.字符串与指针
void func4();
//5.结构与指针
void func5();

int main(){

    func4();
    return 0;
}

void func1(){
    double num1{2};
    double num2{3};
    double *pointer = &num1;
    cout<<"num1: "<<&num1<<endl;
    cout<<"num2: "<<&num2<<endl;
    cout<<"pointer: "<<pointer<<"; the address: "<< &pointer <<endl;
}

void func2(){
    int* num = new int;
    *num = 22;

    delete num;    //释放内存
    cout<<"num's location: "<<&num;    //释放的是指针指向的内存块，而并非指针本身

}

void func3(){
    int *nums = new int[3];    //初始指向第一个地址
    nums[0] = 1;
    nums[1] = 2;    //等同于 *(nums+1)
    nums[2] = 3;
    cout<<"first: "<<*nums<<endl;

    nums++;    //+1代表了移向下一个元素
    cout<<"first: "<<*nums<<endl;

    int num[3]{1,2,3};
    nums = num;    //数组名实质是指针

    delete []nums;    //指针数组的释放
}

void func4(){
    //字符串以及字符串常量都是其地址
    char arr[5] = "word";
    bool b = (arr=="word");
    cout<<b<<endl;    //0;用==比较的实际是地址,并不是字符串内容

    //按理说，ch是数组第一个元素的地址，但是cout打印了整个字符串。
    //这是因为cout会默认一直打印字符后的字符，直到遇到空字符
    char ch[4] = "abc";
    cout<<ch;
}

void func5(){
    struct stu{
        int id;
        string name;
    };
    stu me{
        1,
        "jack"
    };
    stu * nMe = &me;

    cout<<"name: "<<nMe->name<<", id: "<<me.id<<endl;    // ->, .的访问
    delete nMe;
    cout<<"is?: "<<me.name;    //注意会删掉原来的东西
}

void func6(){
    //前缀++,--与*的优先级相同,按照从右到左结合
    double arr[3] {1.1,2.2,3.3};
    double *arr2 = arr;
    double d = *++arr2;    //先指针移动再解引用

    //后缀++,--优先级高于*
    double dd = *arr2++;   //指针后移,解引用原值

}