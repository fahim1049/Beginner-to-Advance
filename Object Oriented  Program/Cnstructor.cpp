#include<iostream>
using namespace std;

class Student
{   public:
     int id;
     double gpa;

     void display()
     {
         cout<<id<<" "<<gpa<<endl;

     }
     Student(int x, double y)
     {
         id = x;
         gpa = y;
     }
};

int main()
{
    Student fahim(1049,3.50);
    fahim.display();

    Student kafi(1232,3.45);
    kafi.display();


}

