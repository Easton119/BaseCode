#include<iostream>
#include<cstring>
#include<cassert>
using namespace std;
char* createArray(int size){
    assert(size>5);//���ԣ�size>5Ϊ�棬���������ֹ
    char* arr = new char[size];
    return arr;
}

int main(){
  char* buf = createArray(10);
  strcpy(buf,"abc d");
  cout<<buf<<endl;
  delete[] buf;
 
  //��̬����static_assert
  static_assert(sizeof(long)==4,"long must be 4 bytes in windows");
  cout<<"win64��long���ֽ���:"<<sizeof(long)<<endl;
  system("pause");
}