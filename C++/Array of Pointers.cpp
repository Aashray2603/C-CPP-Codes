#include<iostream>
using namespace std;

int main(){

    int marks[] = {18, 45, 56, 89};
    marks[2]=54;
    marks[3]=90;

    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i+1<<" is "<<marks[i]<<endl;
    }
 cout<<endl;
    int *p=marks;
    cout<<"The value of marks 1 is "<<*p<<endl;
    cout<<"The value of marks 2 is "<<*(p+1)<<endl;
    cout<<"The value of marks 3 is "<<*(p+2)<<endl;
    cout<<"The value of marks 4 is "<<*(p+3)<<endl;

    return 0;
}
