#include<iostream>
#include<vector>
using namespace std;
class AA{
    public:
        string name;
        AA(const string& m_name):name(m_name){cout<<"���캯��,name="<<name<<endl;}
        AA(const AA& aa):name(aa.name){cout<<"���쿽������,name="<<name<<endl;}

};
//���ڷ�Χ��forѭ��
int main(){
    vector<int> vv{1,2,3,4,5};
    for(int val:vv){
        cout<<val<<" ";
    }
    cout<<endl;
    
    vector<AA> va;
    AA ca("xiaoming");
    //ÿ�β���ʱ�������ݣ���֮ǰ�Ķ���������¹��쿽��
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