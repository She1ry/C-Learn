

#ifndef P10_CUSTOMER_H
#define P10_CUSTOMER_H
class Customer{
private:
    long arrive;
    int processTime;
public:
    Customer();
    void set(long when);
    long when() const;
    int pTime() const;

};
#endif //P10_CUSTOMER_H
