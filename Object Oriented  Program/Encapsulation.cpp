#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
private :
    string name;
    int id;
public:

    void setName(string x)
    {
        name = x;

    }
    string getName()
    {
        return name;
    }

};
int main()
{
    Student s1;


    s1.setName("Fahim");

    cout<<s1.getName();

    getch();
}
