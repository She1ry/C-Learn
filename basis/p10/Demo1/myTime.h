#ifndef P10_MYTIME_H
#define P10_MYTIME_H

class Time {
private:
    int hours_;
    int minutes_;
public:
    explicit Time(int hours=0, int minutes=0);    //��ֹ��ʽת��
    Time(int hours);    //������ʽת�� Time=int
    ~Time();

    void set(int hours, int minutes);
    void show()const;

    Time operator+(const Time& t)const;
    friend void operator<<(std::ostream &os, const Time &t);
    explicit operator int()const;    //����ת�� int=Time


};

#endif //P10_MYTIME_H
