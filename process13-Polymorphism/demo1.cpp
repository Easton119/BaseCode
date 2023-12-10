#include<iostream>
using namespace std;
class Shape{
    int w,h;
    public:
        Shape(int a,int b):w(a),h(b){
            printf("w is %d,h is %d\n",w,h);
        }
        // =0 : pure virtual function
        virtual void area()=0;
};
class Rectangle:public Shape{
    public:
        Rectangle(int a,int b):Shape(a,b){
        }
        void area(){
            printf("Rectangle area\n");
        }
};

int main(){
    Shape* shape;
    Rectangle rectangle(2,5);
    shape = &rectangle;
    shape->area();
}