#include<iostream>
using namespace std;
struct Person{
    const char* name;
    int age;
};
//����һ��constexpr���ε�ģ�庯��
template<typename T>
constexpr T display(T t){
    return t;
}

int main()
{
    //����const,constexpr:
    //const:��ʾֻ��
    //constexpr:��ʾ����
    struct Person p {"mike",11};
    //��ͨ����
    struct Person ret = display(p);
    cout<<ret.name<<"\t"<<ret.age<<"\n";

    //������ʾʽ����
    constexpr struct Person p2 {"Ann",12};
    constexpr struct Person ret2 = display(p2);
    cout<<ret2.name<<"\t"<<ret2.age<<"\n";
}