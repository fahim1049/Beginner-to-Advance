#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter your two number:\n";
    cin>>num1>>num2;
    int sum,sub,div,mul;

    sum = num1 + num2;
    cout<<"Sum is two number :"<<sum;
    cout<<endl;

    sub = num1 - num1;
    cout<<"Sub is two number :"<<sub;
    cout<<endl;

    div = (float)num1 / num2;
    cout<<"Div is two number :"<<div;
    cout<<endl;

    mul = num1 * num2;
    cout<<"Multi is two number is:"<<mul;
    cout<<endl;
    getch();
}
