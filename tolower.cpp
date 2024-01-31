
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter your Letter :";
    cin>>ch;

    ch = tolower(ch);//when write you Capital it convert to lower

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"Vowel";
    }else{
    cout<<"Consonant";
    }
}
