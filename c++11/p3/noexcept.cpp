#include<iostream>
using namespace std;

double divide(double a,double b)
{
    if(b==0) throw "Divide by zero exception";
    return a/b;
}
double divide2(double a,double b) noexcept
{
    if(b==0) cout<<"Divide by zero exception2333"<<endl;
    return a/b;
}
int main(){
    double b = divide2(10,0);
    try
    {
        /* code */
        double a = divide(2,0);
        cout<<a<<endl;
    }
    catch(const char* e)
    {
        std::cerr <<e << '\n';
    }
    system("pause");

}