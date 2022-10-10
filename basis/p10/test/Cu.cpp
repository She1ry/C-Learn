//
// Created by She1ry on 2022/10/9.
//
#include "./Cu.h"
#include <iostream>
using std::cout;
using std::endl;

Man::Man() {

    cout<<"constructor: "<<this<<endl;
}

Man::~Man() {
    cout<<"delete: "<<this<<endl;
}



void A::show(const Man &a) {
    cout<<"run"<<endl;
    am=a;
}

void A::print() {
    cout<<"pppp"<<endl;
}

void A::pp() {
    cout<<&am<<endl;
}
