#include <iostream>
#include "myTime.h"

int main(){
    Time t1{5,12};
    Time t2{3, 12};
    Time t3 = t1;    //最后析构调用了两次，可见有默认的赋值构造
    Time t = t1+t2;
    std::cout<<t;
    return 0;
}
