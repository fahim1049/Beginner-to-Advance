
#include<iostream>
#include<conio.h>
using namespace std;
int  main()
{
    int sum=0,n;
    cout<<"Enter Your Last number :";
    cin>>n;
    for(int i=1;i<=n;i=i+1)
    {
       sum =sum + i;

    }

     cout<<"Your sum is :"<<sum;

    getch();
}
