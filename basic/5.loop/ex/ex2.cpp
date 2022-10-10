//五秒后停止循环
#include <iostream>
#include <ctime>


int main(){
    typedef clock_t time ;    //起别名
    using namespace std;
    time delay = 5*CLOCKS_PER_SEC;    //CLOCKS_PER_SEC每秒所代表的系统时间单位数
    time start = clock();    //返回系统时间单位数
    while (clock()-start<delay){
        cout<<"loading"<<endl;
    }
    return 0;
}
