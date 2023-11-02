#include<iostream>
#include<vector>
using namespace std;
class AA{
    public:
        string name;
        AA(const string& m_name):name(m_name){cout<<"构造函数,name="<<name<<endl;}
        AA(const AA& aa):name(aa.name){cout<<"构造拷贝函数,name="<<name<<endl;}

};
//基于范围的for循环
int main(){
    vector<int> vv{1,2,3,4,5};
    for(int val:vv){
        cout<<val<<" ";
    }
    cout<<endl;
    
    vector<AA> va;
    AA ca("xiaoming");
    //每次插入时都会扩容，将之前的对象进行重新构造拷贝
    va.push_back(ca);
    AA cb("xiaohong");
    va.push_back(cb);
    // va.push_back("xiaoli");
    va.emplace_back("xiaop");
    cout<<endl;
    for(AA& it:va){
        cout<<it.name<<endl;
    }
    system("pause");
}