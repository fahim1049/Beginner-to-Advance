#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        int randomNumber = rand() %10+1;
        cout<<"Random number is :"<<randomNumber<<endl;
    }
}
