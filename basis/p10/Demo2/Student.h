#ifndef P10_STUDENT_H
#define P10_STUDENT_H

namespace demo2{
    class Student{
    private:
        enum {nameSize=20};
        char * name= nullptr;
        static int nums;
    public:
        //以下都会有默认函数
        Student();
        Student(const Student& stu);    //复制构造函数，当函数传参时会调用
        Student & operator=(const Student stu);
        ~Student();

        //分割一下
        static int howMany();    //静态方法，调用只能通过类名

    };
};

#endif //P10_STUDENT_H
