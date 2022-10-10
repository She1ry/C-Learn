#include <cstring>
#include "Student.h"

using namespace demo2;

int Student::nums = 0;    //静态数据的初始化要在类外

Student::Student() {
    name = new char[7];
    strcpy(name, "Anonymous");
    nums++;
}

Student::Student(const demo2::Student &stu) {
    name = new char[strlen(stu.name)+1];
    strcpy(name, stu.name);
    nums++;
}

Student &Student::operator=(const demo2::Student stu) {
    if(this != &stu){
        delete [] name;
        name = new char [strlen(stu.name)+1];
        strcpy(name, stu.name);
    }

    return * this;
}

Student::~Student() {
    --nums;
    delete [] name;
}

int Student::howMany() {
    return nums;
}