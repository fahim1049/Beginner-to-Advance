 /*1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5
   1 2 3 4 5 6
   1 2 3 4 5 6 7*/

#include<iostream>
#include<conio.h>
using namespace std;
int  main()
{
    int row,col,n;
    cout<<"Enter Your Last number :";
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++)
        {
            cout<<" "<<col;

        }
        cout<<endl;
    }

    getch();
}


