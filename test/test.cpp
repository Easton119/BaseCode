#include<iostream>
#include<memory>
using namespace std;
int main(){
   cout<<"hello c++"<<endl;
   unique_ptr<int> p=make_unique<int>(200);
   unique_ptr<int> uptr2 = move(p);
   system("pause");
   
}