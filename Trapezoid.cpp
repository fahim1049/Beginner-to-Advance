#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     double width1,width2,verticalheight,area;
    cout<<"Enter your width1:";
    cin>>width1;
    cout<<"Enter Your width2:";
    cin>>width2;
    cout<< "Enter your vertical Height :";
    cin>>verticalheight;

    area =  (float)1/2 * width1+width2 * verticalheight;

    cout<<"Area of Trapezoid :"<<area;
    getch();
}
