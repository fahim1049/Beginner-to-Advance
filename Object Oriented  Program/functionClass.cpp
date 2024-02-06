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
};

int main()
{
    Student fahim;
    fahim.id = 1049;
    fahim.gpa = 3.50;
    fahim.display();

    Student kafi;
    kafi.id = 212;
    kafi.gpa = 3.56;
    kafi.display();


}

