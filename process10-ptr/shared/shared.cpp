#include<iostream>
#include<memory>
using namespace std;
class AA{
    public:
        int num;
        AA(){cout<<"constructor()\n";}
        AA(const int& n):num(n){cout<<"constructor(),"<<n<<endl;}
        ~AA(){cout<<"destructor,num\n";}
};
int main(){
    AA* p = new AA(20);
    shared_ptr<AA> sharedPtr(p);
    shared_ptr<AA> sharedPtr2(p);
    shared_ptr<AA> sharedPtr3(sharedPtr);
    cout<<sharedPtr.use_count()<<endl;
    cout<<sharedPtr2.use_count()<<endl;
    system("pause");
}