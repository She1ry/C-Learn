//
// Created by She1ry on 2022/10/1.
//
#include <iostream>

using namespace std;

void func1(){
    //1.��ʼ��
    int num(2);
    int num2{};
    int num3{16};
    float f{};    //�б��ʼ������������Ĭ�ϳ�ʼ���ļ򵥷�ʽ
    cout<<num3<<endl;
    cout<<"float:"<<f<<endl;
    //2.��ʶ�������������
    cout<<hex<<"16���ƣ�"<<num3<<"  8���ƣ�"<<oct<<num3;
}

void char_(){
    char ch;
    cout<<"����һ���ַ���";
    cin>>ch;
    cout.put(ch);


    //2.���ַ�
    wchar_t ch1 = L'P';
    cout<<endl<<ch1<<";";
    wcout<<ch1;
}

void func2(){
    int num = int(99.9);    //����ת��
    // int num = {9.9}    not allowed���б��ʼ����������խ����
}

int main(){
//    func1();
//    char_();
 cout<< sizeof(int);
}


