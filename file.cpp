#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
using namespace std;
int main()
{   string name;
    ofstream file;

    file.open("fahim.txt");
    cout<<"Enter your name :";
    getline(cin,name);

    file<<name<<endl;

    file.close();



    return 0;

    getch();
}

