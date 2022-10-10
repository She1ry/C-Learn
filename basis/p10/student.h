#ifndef P10_STUDENT_H
#define P10_STUDENT_H

class Student{
private:
    enum {Classes=3};    //1.����������ʽ����Ϊֻ��Ҫ���������Կ��Բ�����ö�ٱ�����
    static const int nameSize = 20;     //2.����������ʽ
    const char* name_;
    int grade_;
    char subject[Classes][20]{"����","��ѧ","Ӣ��"};
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
