#include<list>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4};
    list<int> l1(v.begin()+1,v.end()-1);//利用迭代器实现不同容器间轻松转换
    for(auto val:l1){
        cout<<val<<" ";
    }
    system("pause");

}