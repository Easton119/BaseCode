#include<memory>
#include<iostream>
using namespace std;

class AA{
    public:
        int num;
        AA(){cout<<"constructor()\n";}
        AA(const int& n):num(n){cout<<"constructor(),"<<n<<endl;}
        ~AA(){cout<<"destructor,num\n";}
};
void fun(){
    AA *p = new AA(10);
    // delete p;
    //todo: 初始化的三种方式
    unique_ptr<AA> uniq1(p);
    // unique_ptr<AA> uniq2 = make_unique<AA>(20);
    // unique_ptr<AA> uniq3(new AA(22));
    cout<<uniq1->num<<endl;
    cout<<(*uniq1).num<<endl;

    //unique_ptr数组
    unique_ptr<AA[]> uniqarr(new AA[2]{1,2});
    uniqarr[0].num=100;
    cout<<uniqarr[0].num<<endl;
}
int main(){
    fun();
    system("pause");
}