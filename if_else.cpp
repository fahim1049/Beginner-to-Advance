#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int num;
    cout<<"Enter any number : ";
    cin>>num;

    if(num>0)
    {
        cout<<"Positive Number";
    }
    if(num<0)
    {
        cout<<"Negative Number";
    }
    if(num==0)
    {
        cout<<"Number is Zero";
    }
}
