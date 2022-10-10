#include <iostream>
#include <cstring>

/*
 *  需求仅交换工作的薪水，而name不变
 */

struct job{
    std::string name;
    double salary;
};

void Swap(int, int);

template<typename T>
void Swap(T &, T &);

template<>
void Swap(job&, job&);

template<typename T1, typename T2>
auto k(T1 x, T2 y) -> decltype(x+y);

int main(){
    job j1{"da", 100}, j2{"dd", 200};
    Swap(j1, j2);
    std::cout<<j1.salary;
}

void Swap(int a, int b){

}

template<>
void Swap(job& j1, job& j2){
    auto temp = j1.salary;
    j1.salary = j2.salary;
    j2.salary = temp;
}


