#include <iostream>

void func(char (*a)[4]){

}

int main(){
    int a =3;
    int *p = &a;
    delete p;

    std::cout<<p;
}