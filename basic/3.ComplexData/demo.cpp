//
// Created by She1ry on 2022/10/1.
//
#include <iostream>
#include <cstring>
using namespace std;

void func1(){
    int nums[3]{1,2,3};

    // int nums[3];
    // nums = {1,2,3};    not allowed

    // 2.字符串
    char str[] = "Tom";    //等价于 {'T','o','m','/0'}
    cout<< sizeof(str)<<endl;    //4；因为字符串以'\0'结尾

    char str1[] = "Tom" " and Jack";    //以空格或换行相邻的字符串会自动拼接

    int len =  int (strlen(str1));    //返回的是可见字符长度
}

void func2(){
    /*
        字符串的传统形式：字符数组
     */

    // 1.假设输入的是jack Tom。会发现两个name都被赋值了。这是因为cin是以空格进行截断输入的。
    char name[20];
    char name2[20];
    cin>>name;
    cin>>name2;
    cout<<"name: "<<name<<";name2: "<<name2;

    //2.使用get函数读取一行
    cin.getline(name, 20);    //丢弃换行符
    cin.get(name, 20);    //换行符会留在输入流中

}

void func3(){
    string str = "aaa";
    cout<<str.size();
}

/*
 * 原始字符串
 */
void func4();

int main(){
//    func1();
//    func2();


    return 0;
}

void func4(){
    string s = R"(111/n)";    //原始字符串，不会转义
    s = R"+*("word")+*";    //为了防止定界符“(歧义，使用"+*(来定界
}