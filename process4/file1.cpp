// 模板类 - 栈
#include<iostream>
using namespace std;

template<class T>
class Stack{
    private:
        int* items; //栈数组
        int stacksize; //栈实际大小
        int top; //栈顶指针
    public:
        Stack(int size):stacksize(size),top(0){
            items=new int[stacksize];
        }
        ~Stack(){
            delete [] items;
            items=nullptr;
        }
        bool isfull(){

        }
        bool isempty(){

        }
        bool top(int& item){

        }
};

int main()
{

}