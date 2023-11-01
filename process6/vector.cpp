#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    //vector中使用迭代器提供的API
    vector<int> v2(v1.begin()+1,v1.end()-1);
    for(auto it = v2.rbegin();it!=v2.rend();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=v1.begin();it!=v1.end();){
        cout<<*it<<" ";
        it=v1.erase(it);
    }

    // 9 8 7 6 5 4 3 2
    system("pause");
}