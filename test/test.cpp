#include<iostream>
#include<memory>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
using namespace std;
int main(){
   // cout<<"hello c++"<<endl;
   int fd = open("test.txt",O_CREAT|O_RDWR,0777);
   int fd2 = open("test1.txt",O_CREAT|O_RDWR,0777);
   cout<<fd<<endl;
   int s = lseek(fd,0,SEEK_END);
   cout<<s<<endl;

   char buf[] = "hello world2333";
   int len = 100;
   
   write(fd2,buf,sizeof(buf));
   close(fd);
   close(fd2);
}