#ifndef P10_STUDENT_H
#define P10_STUDENT_H

class Student{
private:
    enum {Classes=3};    //1.常量声明方式，因为只需要常量，所以可以不声明枚举变量名
    static const int nameSize = 20;     //2.常量声明方式
    const char* name_;
    int grade_;
    char subject[Classes][20]{"语文","数学","英语"};
public:
    Student();
    Student(const char *name, int grade);
    ~Student();
    void show() const;
    void getScore(int s);
    void changeSubject(const char str[20], int index);
    const Student& better(const Student & s)const;
};
#endif //P10_STUDENT_H
