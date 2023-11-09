#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class AA{
    public:
    T m_no;
    AA(const T& no):m_no(no){}
    bool operator()(const T& no){
        if(no!=m_no)return false;
        cout<<"I find No."<<no<<"\n";
        return true;
    }
};

template<typename T1,typename T2>
T1 findif(const T1 first,const T1 last,T2 pfun){

    for(auto i = first;i!=last;i++)
    {
        if(pfun(*i)==true) return i;//todo:用迭代器调用函数
    }
    return last;
}

//todo: 仿函数
int main(){
    // vector<int> v{1,2,3};
    vector<string> v{"a","bb","cc"};
    auto it = findif(v.begin(),v.end(),AA<string>("bb"));
    //todo:传入参数，第三个参数为匿名类的仿函数
    if (it==v.end())
    {
        cout<<"falure\n";
    }
    else cout<<"successly find no."<<*it<<endl;
    system("pause");
}
