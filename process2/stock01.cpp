#include "stock00.h"
#include<iostream>
using namespace std;
Stock::Stock(string name_,int num_){
    name=name_;
    num=num_;
}
void Stock::add(){
    num++;
}
//��������
Stock::~Stock()
{
    cout<<"����-"<<"name:"<<name<<" num:"<<num<<endl;
}
//���������
Stock Stock::operator+(const Stock & stock) const
{

    Stock newStock(this->name+"-"+stock.name,0);
    newStock.num = this->num + stock.num;
    return newStock;
}

void Stock::show(){
    cout<<"name:"<<this->name<<endl;
    cout<<"num:"<<this->num<<endl;
}
void Stock::showT(){
    Stock st("pp",111);
    cout<<st.name;
}