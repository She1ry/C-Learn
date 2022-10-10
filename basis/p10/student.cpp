#include <iostream>
#include <cstring>
#include "student.h"

Student::Student() {
    this->grade_=0;
    this->name_="Anonymous";
}

Student::Student(const char *name, int grade) {
    this->grade_=grade;
    if(strlen(name)>nameSize){
        this->name_="Anonymous";
    } else{
        this->name_ = name;
    }
}

Student::~Student() = default;

void Student::show() const {
    std::cout<<"name: "<<this->name_
        <<", grade: "<<this->grade_
        <<std::endl
        <<"+��Ŀ1��"<<this->subject[0]<<std::endl
        <<"+��Ŀ2��"<<this->subject[1]<<std::endl
        <<"+��Ŀ3��"<<this->subject[2]<<std::endl
        <<std::endl;
}

const Student &Student::better(const Student &s) const {
    //this�൱��ָ������ַ��ָ�룬*this�����ñ�ʾ������
    return s.grade_>=this->grade_?s:*this;
}

void Student::getScore(int s) {
    this->grade_+=s;
}

void Student::changeSubject(const char str[20], int index) {
    if(index>=this->Classes){
        std::cout<<"Err";
    } else{
        strcpy(this->subject[index], str);
    }
}


