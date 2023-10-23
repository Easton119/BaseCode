#include<iostream>
#include "stock00.h"
using namespace std;
void fun1(){
    Stock stock1 = Stock("xiaoming",20);
    Stock stock2 = Stock("marry",30);
    stock2.add();
    Stock sto=stock1+stock2;
    sto.show();
    sto.showT();
    // stock.~Stock();
}
int main(){
    fun1();
    system("pause");
}