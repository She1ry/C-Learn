#ifndef P10_BRASS_H
#define P10_BRASS_H

#include <string>

class Brass{
private:
    std::string name;
    long acctNum;
    double balance;
public:
    explicit Brass(const std::string &a="Null", long id= -1, double bal=0.0);
    void deposit(double num);
    virtual void withDraw(double num);
    double Balance() const;
    virtual void viewAcct() const;
    virtual ~Brass();
};

class BrassPlus: public Brass{
private:
    double maxLoan;
    double rate;
    double sum;
public:
    BrassPlus(const std::string &s = "Null", long id=-1, double bal=0.0,
              double ml = 500, double r=0.11125);
};
#endif //P10_BRASS_H
