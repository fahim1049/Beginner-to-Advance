#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
     double radius,angle,area;
    cout<<"Enter your radius:";
    cin>>radius;
    cout<<"Enter Your angle:";
    cin>>angle;

    area = 3.14* radius * radius *angle /360;

    cout<<"Area of Sector of a circle :"<<area;
    getch();
}

