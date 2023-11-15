#include<iostream>
using namespace std;
void func(int& a){
    //按引用传递，会改变原来的值。
    cout<<"func:"<<a<<endl;
    a++;
    cout<<"func:"<<a<<endl;
}
void func2(int a) {
    //按值传递，不会改变原来的值
    cout<<"func2:"<<a<<endl;
    a++;
    cout<<"func2:"<<a<<endl;
}


auto f = [](int a){cout<<a+1<<endl;};

int main(){
    int a = 10;
    // cout<<a<<endl;
    // func2(a);
    // cout<<a<<endl;
    f(10);
   

}