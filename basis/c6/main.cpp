#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void swaper(T &, T &);

int main() {
    int num1=1, num2=2;
    swaper(num1, num2);
    cout<<num1;
    return 0;
}

template <typename T>
void swaper(T &a, T &b){
    T temp;
    temp = a;
    a=b;
    b=temp;
}
