#include<iostream>
using namespace std;
extern int pro;
void fun1(){
    int pro=20;
    
	cout<<pro<<endl;
    cout<<::pro<<endl;
}