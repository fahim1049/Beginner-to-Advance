#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int digit;

    cout<<"Enter your digit:";
    cin>>digit;

    switch(digit)
    {
    case 0:
        cout<<"Zero";
        break;

    case 1:
        cout<<"one";
        break;
    case 2:
        cout<<"Two";
        break;
    case 3:
        cout<<"Three";
        break;
    case 4:
        cout<<"Four";
        break;
    case 5:
        cout<<"Five";
        break;


         default:
        cout<<"Invalid";
    }

   getch();
}
