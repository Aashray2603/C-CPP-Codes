#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return fib(n-2) + fib(n-1);
}

int factorial(int n)
{
    if (n==0 || n==1)
        return 1;
    else
        return n * factorial(n-1);
}

int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"The factorial of "<<a<< " is "<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at position "<<a<< " is "<<fib(a)<<endl;
    return 0;
}

