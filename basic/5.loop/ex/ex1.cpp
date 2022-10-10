//反向打印字符串

#include <iostream>

using namespace std;
int main(){
    string word = "hello";
    for(int i=word.size()-1;i>=0;i--){
        cout<<word[i];
    }
    return 0;

}
