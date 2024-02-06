#include<iostream>
using namespace std;

class Student
{   public:
     int id;
     double gpa;
};

int main()
{
    Student fahim;
    fahim.id = 1049;
    fahim.gpa = 3.50;
    cout<<"Fahim ID:"<<fahim.id<<endl<<"Fahim CGPA:"<<fahim.gpa<<endl;

    Student kafi;
    kafi.id = 212;
    kafi.gpa = 3.56;

    cout<<"Kafi Id :"<<kafi.id<<endl<<"kafi CGPA :"<<kafi.gpa;
}
