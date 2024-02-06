#include<iostream>
using namespace std;
void addition(int a,int b)
{
    int sum = a+b;
    cout<<"Sum is :"<<sum<<endl;

}
void substruction(int a1,int a2 )
{
    int sub = a1-a2;
    cout<<"Sub is :"<<sub<<endl;
}
void multiplication(int a3,int b3)
{
    int mul = a3*b3;
    cout<<"Multi is :"<<mul<<endl;
}
void divition(int a4,int b4)
{
    float div = (float)a4/b4;
    cout<<"div is :"<<div<<endl;
}

int main()
{
    addition(50,150);
    substruction(20,30);
    multiplication(20,30);
    divition(26,30);
}
