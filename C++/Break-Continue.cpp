#include<iostream>
using namespace std;

int main()
{
     for (int i=0; i<9; i++)
     {
         if(i==4)
             break;
        cout<<i<<"\t";
     }
     cout<<endl;
    for (int i=0; i<9; i++)
    {
        if(i==2)
            continue;
        cout<<i<<"\t";
    }


    return 0;
}

