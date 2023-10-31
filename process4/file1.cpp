// 模板类 - 栈
#include<iostream>
using namespace std;

template<class T>
class Stack{
    private:
        T* items; //栈数组
        int stacksize; //栈实际大小
        int top; //栈顶指针
    public:
        Stack(int size):stacksize(size),top(0){
            items=new T[stacksize];
        }
        ~Stack(){
            delete [] items;
            items=nullptr;
        }
        bool isfull(){
            return top==stacksize;
        }
        bool isempty() const{
            return top==0;
        }
        bool push(const T& item){
            if(top<stacksize){
                items[top++]=item;
                return true;
            }
            return false;
        }
        bool pop(T& item){
            if(top>0){
                item=items[--top];
                return true;
            }
            return false;
        }
};

int main()
{
    // Stack<int> ss(5);
    Stack<string> ss(3);
    //元素入栈
    // ss.push(1);ss.push(2);ss.push(3);ss.push(4);ss.push(5);
    ss.push("mike");ss.push("lily");ss.push("peter");
    string item;
    //元素出栈
    while(ss.isempty()==false){
        ss.pop(item);
        cout<<item<<endl;
    }
    system("pause");
}