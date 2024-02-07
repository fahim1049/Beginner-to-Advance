#include<iostream>
using namespace std;
class Student
{
public:
    string name;

    Student (string name)
    {
       this -> name = name;
    }

    void display()
    {
        cout<<name<<endl;
    }

};

int main()
{
    Student s1("Fahim");
    s1.display();

}
