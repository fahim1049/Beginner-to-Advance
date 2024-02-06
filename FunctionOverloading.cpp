#include<iostream>
using namespace std;
void sum(int a,int b)
{
    int sumation = a+b;
    cout<<"sum " <<sumation<<endl;
}
void sum (int c,int d,int e)

{
    int addition =c+d+e;
    cout<<"addi "<<addition<<endl;
}
int main()
{
    sum(10,30);
    sum(30,40,50);
}
