#include<iostream>
#include<list>
using namespace std;

class Test{
    public:
        Test(){

        }
};
//move����
int main(){

    Test t;
    // Test&& t1 = t;error
    //move����ֵת��Ϊ��ֵ�������Ϳ��Գ�ʼ����ֵ������
    Test&& t1 = move(t);//ok.

    list<string> ls;
    ls.push_back("hello");
    ls.push_back("world");
    list<string> ls1 = ls;// ��Ҫ����, Ч�ʵ�
    list<string> ls2 = move(ls);// ����Ҫ����, Ч�ʸ�
    //��ӡls2������
    for(auto it = ls2.begin(); it != ls2.end(); it++){
        cout << *it << endl;
    }
    //��ӡls2�����ݵķ���2
    for(auto& it : ls2){
        cout << it << endl;
    }
}