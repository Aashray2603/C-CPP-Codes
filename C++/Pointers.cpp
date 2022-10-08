#include<iostream>
using namespace std;
// pointer? -> Data type which holds the address of other data types
int main()
{

    int a=3;
    int *b;
    b=&a;
    int **c=&b,***d=&c;

    cout<<"The address of a (i.e. b) is "<<&a<<endl;
    cout<<"The value at address b (i.e. a) is "<<*b<<endl;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The value at address c (i.e. b) is "<<*c<<endl;
    cout<<"The address of c is "<<&c<<endl;
    cout<<"The value at address of address c (i.e. a) is "<<**c<<endl;
    cout<<"The address of d is "<<&d<<endl;
    cout<<"The value of a is "<<***d<<endl;

    return 0;
}

