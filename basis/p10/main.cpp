#include <iostream>
#include "student.h"

int main() {
    Student stu{"Jack", 10};
    Student stu2{"Lose", 9};

    const Student& winner = stu.better(stu2);
    winner.show();

    stu.changeSubject("ÀúÊ·", 1);
    stu.show();
    return 0;
}
