#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1 = 140;
    int num2 = 60;


    int *p1,*p2;

    p1= &num1;
    p2=&num2;


    int sum = *p1 + *p2;

    cout<<sum;

    getch();
}

