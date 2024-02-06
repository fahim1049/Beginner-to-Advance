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
     void setValue(int x, double y)
     {
         id = x;
         gpa = y;
     }
};

int main()
{
    Student fahim;
    fahim.setValue(1049,3.50);
    fahim.display();

    Student kafi;
    kafi.setValue(1232,3.45);
    kafi.display();


}


