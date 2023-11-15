#include <iostream>
#include<climits>
using namespace std;
struct Base 
{
    Base() : a(250) {}
    Base(int num) : a(num) {}

    int a;
    int b = 1;	
    static int c;	
    // static const double d;	
    // static const char* const e = "i am luffy";	
    static const int f = 20;	
};
int Base::c=120;
// const double Base::d=20.4;

class Test
{
private:
    int a = 9;
    int b = {5};
    int c{12};
    double array[4] = { 3.14, 3.15, 3.16, 3.17};
    double array1[4] { 3.14, 3.15, 3.16, 3.17 };
    // string s1("hello");     // error
    string s2{ "hello, world" };
};
//类的初始化：就地初始化，和初始化列表
int main()
{
    Base base;
    cout<<base.b<<endl;
    cout<<base.c<<endl;
    cout<<base.f<<endl;
    long long max = LLONG_MAX;
    long long min = LLONG_MIN;
    unsigned long long ullMax = ULLONG_MAX;

    cout << "Max Long Long value: " << max << endl
        << "Min Long Long value: " << min << endl
        << "Max unsigned Long Long value: " << ullMax << endl;
    system("pause");
    return 0;
}
