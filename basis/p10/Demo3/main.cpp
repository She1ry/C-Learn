#include "./headers/Customer.h"
#include "./headers/Queue.h"
#include <iostream>

int main(){

    Queue<Customer> queue{1};
    Customer s1 = Customer();
    queue.enQueue(s1);
    std::cout<<queue.isFull();
    return 0;
}