//
// Created by She1ry on 2022/10/2.
//
#include <iostream>

int main(){
    using namespace std;
    int* num = new int[3];
    int* num2 = new int[3];
    num[0] = 1;
    num[1] = 1;
    num[2]=1;
    num2[0] = 2;
    cout<<&num[1]<<endl;
    cout<<&num2[-1];
}