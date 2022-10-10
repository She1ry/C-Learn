#include <iostream>
#include <cstring>
struct CandyBar{
    char name[20];
    double weight;
    int calories;
};

void set(CandyBar&,const char* ="Mi", double=2.85 ,int=350);
void show(const CandyBar&);

int main(){
    CandyBar bar;
    set(bar, "chips", 2.3, 100);
    show(bar);
    return 0;
}

void set(CandyBar& bar,const char* name, double weight,int calories){
    strcpy(bar.name, name);
    bar.calories=calories;
    bar.weight=weight;
}

void show(const CandyBar& bar){
    using namespace std;
    cout<<"+ Goods: "<<bar.name<<endl
        <<"+ Calories: "<<bar.calories<<endl
        <<"+ Weight: "<<bar.weight<<endl;
}