#include<iostream>
using namespace std;

//定长数组 Array.
template<class T,int len>
class Array{
    private:
        T items[len];
    public:
        Array(){}//默认构造函数
        ~Array(){}//析构函数
        T& operator[](int i){return items[i];}//重载操作符[],可以修改数组中的元素
        const T& operator[](int i)const {return items[i];}//不可以修改数组中的元素
};
//动态数组 vector:
//添加resize函数
int main(){
    Array<string,10> arr;
    arr[0]="mk",arr[1]="po",arr[2]="ab";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    system("pause");
}