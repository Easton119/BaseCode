#include<iostream>
using namespace std;
struct Person{
    const char* name;
    int age;
};
//定义一个constexpr修饰的模板函数
template<typename T>
constexpr T display(T t){
    return t;
}

int main()
{
    //区分const,constexpr:
    //const:表示只读
    //constexpr:表示常量
    struct Person p {"mike",11};
    //普通函数
    struct Person ret = display(p);
    cout<<ret.name<<"\t"<<ret.age<<"\n";

    //常量表示式函数
    constexpr struct Person p2 {"Ann",12};
    constexpr struct Person ret2 = display(p2);
    cout<<ret2.name<<"\t"<<ret2.age<<"\n";
}