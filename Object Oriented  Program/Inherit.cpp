#include<iostream>
using namespace std;

class Person
{
public:
    string name;
    int id;

    void display1()
    {
        cout<<name<<endl;
        cout<<id<<endl;
    }


};

 class Student : public Person
    {
    public:
        int age;
        void display2()
        {
            display1();
            cout<<age<<endl;

        }
    };

int main()
{
    Student s1;
    s1.name ="Fahim";
    s1.id =1049;
    s1.age = 27;
    s1.display2();

}
