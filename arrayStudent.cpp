#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int n,sum=0;
    cout<<"Enter your student number :";
    cin>>n;

    int student [n];

    for(int i=0;i<n;i++)

    {   cout<<"Marks for students: "<<i+1<<" = ";
        cin>>student[i];
        sum = sum+student[i];
    }

    cout <<"Total marks:"<<sum<<endl;

    float ave = (float) sum/n;

    cout<<"Average: " <<ave<<endl;

    //max and min

    int max = student[0];
    int min = student[0];
    for(int i=1;i<n; i++)
    {
        if(max<student[i])
        {
            max =student[i];
        }
        if(min >student[i])
        {
            min = student[i];
        }
    }

    cout<<"Maximum marks :"<<max<<endl;
    cout<<"Minimum marks :"<<min<<endl;

    getch();
}
/*
Enter your student number :5
Marks for students: 1 = 10
Marks for students: 2 = 30
Marks for students: 3 = 24
Marks for students: 4 = 33
Marks for students: 5 = 56
Total marks:153
Average: 30.6
Maximum marks :56
Minimum marks :10
*/
