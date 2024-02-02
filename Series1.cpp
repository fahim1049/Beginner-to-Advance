#include<iostream>
#include<conio.h>
using namespace std;
int  main()
{
    int sum=0,n;
    cout<<"Enter Your Last number :";
    cin>>n;
    for(int i=2;i<=n;i=i+2)
    {
       sum =sum + i;

    }

     cout<<"Your sum is :"<<sum;

    getch();
}
