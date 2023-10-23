#ifndef STOCK_H
#define STOCK_H
#include<string>
using namespace std;
class Stock{
    private:
        string name;
        int num;
    public:
        Stock(string name_,int num_);
        void add();
        ~Stock();
        Stock operator+(const Stock & stock) const;
        void show();
        void showT();
};

#endif