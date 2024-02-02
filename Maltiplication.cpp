#include<iostream>
#include<conio.h>
using namespace std;
int  main()
{
    int num,i,x;
    cout<<"Enter Your number :";
    cin>>num;
    for(i=1;i<=10;i++)
    {
        cout<<num<<"x"<<i<<"="<<(num*i)<<endl;
    }

    getch();
}
