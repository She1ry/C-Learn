//
// Created by She1ry on 2022/10/2.
//
#include <iostream>
#include <array>
int main(){
    using namespace std;
    double arr1[4]{1.1,2.2,3.3,4.4};
    array<double, 4> arr2 = {5.5,6.6,7.7,8.8};
    cout<<"arr1.location: "<<arr1<<endl;
    cout<<"arr2.location: "<<&arr2<<endl;
    cout<<"arr1-2: "<<arr1[-2];    //越界，访问到了arr2

}