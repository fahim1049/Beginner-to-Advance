#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    try{

        int num1,num2;

    cout<<"Enter Number 1 :";
    cin>>num1;
    cout<<"Enter Number 2 :";
    cin>>num2;
    if(num2==0 || num1==0)
    {
        throw -1;
    }
    double result = (float)num1/num2;
    cout<<"Result is :"<<result;

    }

    catch(int x)
    {
        cout<<"Divided by 0 is not possible"<<endl<<"Please Try Again"<<endl;
    }

    getch();
}
