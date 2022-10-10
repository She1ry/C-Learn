#include <iostream>
const int strSize = 20;
void printStr(char *, int=0);

int main(){
    using namespace std;
    char *str = new char[strSize];
    cout<<"ÊäÈë×Ö·û´®: "<<endl;
    cin.get(str,strSize);
    cin.get();
    printStr(str);
    printStr(str,1);
}

void printStr(char *str, int flag){
    using namespace std;
    static int times{};
    times++;
    if(flag!=0){
        for(int i=0;i<times;i++){
            cout<<str<<endl;
        }
    } else{
        cout<<str<<endl;
    }
}
