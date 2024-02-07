#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
public :
    const int admissionFee;
    const int examFee;

    Student (int x ,int y)
    :admissionFee(x),examFee(y)

    {

        cout<<"Admission Fees :"<<admissionFee <<endl;
        cout<<"Exam Fees:"<<examFee<<endl;

    }
};

int main()
{
    Student s1(10000, 400);

    getch();
}
