#include<iostream>
using namespace std;
void func(int& a){
    //�����ô��ݣ���ı�ԭ����ֵ��
    cout<<"func:"<<a<<endl;
    a++;
    cout<<"func:"<<a<<endl;
}
void func2(int a) {
    //��ֵ���ݣ�����ı�ԭ����ֵ
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