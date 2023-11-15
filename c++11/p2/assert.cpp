#include<iostream>
#include<cstring>
#include<cassert>
using namespace std;
char* createArray(int size){
    assert(size>5);//断言：size>5为真，否则程序终止
    char* arr = new char[size];
    return arr;
}

int main(){
  char* buf = createArray(10);
  strcpy(buf,"abc d");
  cout<<buf<<endl;
  delete[] buf;
 
  //静态断言static_assert
  static_assert(sizeof(long)==4,"long must be 4 bytes in windows");
  cout<<"win64下long的字节数:"<<sizeof(long)<<endl;
  system("pause");
}