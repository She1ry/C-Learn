#include <iostream>

inline double square(double x){
    return x*x;
}

int main(){
    using namespace std;
    double a = square(3);
    return 0;
}
