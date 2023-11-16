#include<iostream>
using namespace std;
class A{
    public:
        int a;
};
// 虚继承
// 在需要继承的基类前加virtual关键字修饰该基类，使其成为虚基类
class B:virtual public A
{
    public:
        int b;
};
class C:virtual public A
{
    public:
        int c;
};
class D:public B,public C
{
    public:
        int d;
};
int main()
{
    D myD;
    // 菱形继承
    // 通过B来访问A的成员a
    myD.B::a=10;
    cout<<myD.B::a<<endl;
    // 普通继承方式——不加virtual,D中将会有两份A的副本
    // 虚继承——只有一份A的副本
    cout<<&myD.B::a<<endl;
    cout<<&myD.C::a<<endl;


}