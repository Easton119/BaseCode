#include<iostream>
#include<list>
using namespace std;

class Test{
    public:
        Test(){

        }
};
//move函数
int main(){

    Test t;
    // Test&& t1 = t;error
    //move将左值转换为右值，这样就可以初始化右值引用了
    Test&& t1 = move(t);//ok.

    list<string> ls;
    ls.push_back("hello");
    ls.push_back("world");
    list<string> ls1 = ls;// 需要拷贝, 效率低
    list<string> ls2 = move(ls);// 不需要拷贝, 效率高
    //打印ls2的内容
    for(auto it = ls2.begin(); it != ls2.end(); it++){
        cout << *it << endl;
    }
    //打印ls2的内容的方法2
    for(auto& it : ls2){
        cout << it << endl;
    }
}