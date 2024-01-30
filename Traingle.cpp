#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   double base,hight,area;
    cout<<"Enter your Base:";
    cin>>base;
    cout<<"Enter Your Hight:";
    cin>>hight;

    area = 1/(double)2 * base * hight;

    cout<<"Area of Triangle :"<<area;
    getch();
}
