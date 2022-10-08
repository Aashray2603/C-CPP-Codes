#include<iostream>

using namespace std;

int c = 45;

int main()
{
     float x = 455;
     float & y = x;
     cout<<"x="<<x<<endl;
     cout<<"y="<<y<<endl;

    // *************Typecasting****************
    int a = 45;
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;

    return 0;
}

