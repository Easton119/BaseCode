#include<iostream>
#include<string>
using namespace std;
template<typename T>
void Swap(T& a,T& b){
    T tmp = a;
    a=b;
    b=tmp;
    cout<<"函数模板调用...\n";
}

template <>
void Swap(int &a,int &b){
    int tmp = a;
    a=b;
    b=tmp;
    cout<<"函数模板的具体化调用\n";
}
//模板类
template<class T1,class T2>
class AA{
    public:
    T1 a;
    T2 b;
    AA(){}
    AA(T1 a_,T2 b_){
        a=a_;b=b_;
    }
    T1 getA(){
        return a;
    }
    T2 getB(){
        return b;
    }
};
int main(){
    // char a='a',b='b';
    // Swap(a,b);
    // cout<<a<<" "<<b<<endl;
    // system("pause");
    // AA<int,string> aa(2,"aaa");
    // cout<<aa.getA()<<endl;
    // cout<<aa.getB()<<endl;

    const char* s="he, is L";

    int len=0;
    while(*s!='\0'){
        cout<<(*s)<<endl;
        s++;
        len++;
    }
    cout<<len<<endl;

    system("pause");
}