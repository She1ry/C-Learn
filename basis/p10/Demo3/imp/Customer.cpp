#include "../headers/Customer.h"
#include <cstdlib>
Customer::Customer() {
    arrive=processTime=0;
}

void Customer::set(long when) {
    arrive=when;
    processTime=std::rand() %3 +1;
}

long Customer::when() const {
    return arrive;
}

int Customer::pTime() const {
    return processTime;
}
