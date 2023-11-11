#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string filename = "F:\\Documents\\c++\\BaseCode\\test\\test.txt";
    string filename1=R"(F:\Documents\c++\BaseCode\test\test1.txt)";
    string filename2="F:/Documents/c++/BaseCode/test/test2.txt";
    // ofstream fout;
    // fout.open(filename2,ios::app);
    // fout<<"xiaoxiao33\n";
    // fout<<"aaaa33\n";
    // fout.close();
    ifstream fin(filename2);
    string buffer;
    while (fin>>buffer)
    {
        cout<<buffer<<endl;
    }
    system("pause");
}