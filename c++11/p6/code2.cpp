#include<iostream>
using namespace std;
//ί�й��캯��
class Test{
    public:
        Test(){};
        Test(int max)
        {
            this->m_max = max > 0 ? max : 100;
        }
        Test(int max, int min):Test(max)
        {
            // Test(max);	
            this->m_min = min > 0 && min < max ? min : 1;
        }
        void func(){
            cout<<"func() called"<<endl;
        }
        int m_min;
        int m_max;
};
class Child:public Test
{
    public:
        using Test::Test;        //�̳й��캯��
        using Test::func;
};
int main()
{
    //todo 1.ί�й��캯�������캯��֮��ĵ���Ҫд�ڳ�ʼ���б���
    Test t(100,20);
    cout<<t.m_min<<"\t"<<t.m_max<<endl;

    //todo 2.�̳й��캯��
    //using ����::������
    Child c(200,10);
    cout<<c.m_min<<"\t"<<c.m_max<<endl;
    c.func();
}