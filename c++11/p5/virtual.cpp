#include<iostream>
using namespace std;
class A{
    public:
        int a;
};
// ��̳�
// ����Ҫ�̳еĻ���ǰ��virtual�ؼ������θû��࣬ʹ���Ϊ�����
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
    // ���μ̳�
    // ͨ��B������A�ĳ�Աa
    myD.B::a=10;
    cout<<myD.B::a<<endl;
    // ��ͨ�̳з�ʽ��������virtual,D�н���������A�ĸ���
    // ��̳С���ֻ��һ��A�ĸ���
    cout<<&myD.B::a<<endl;
    cout<<&myD.C::a<<endl;


}