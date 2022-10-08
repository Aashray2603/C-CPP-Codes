#include<iostream>
using namespace std;
class c2;

class c1
{
    int v1;
    friend void exchange(c1 & , c2 &);
    public:
        void indata(int a){ v1 = a; }
        void display(void){ cout<< v1 <<endl; }
}oc1;

class c2
{
    int v2;
    friend void exchange(c1 &, c2 &);
    public:
        void indata(int a){ v2 = a; }
        void display(void){ cout<< v2 <<endl; }
}oc2;

void exchange(c1 &x, c2 &y)
{
    int temp = x.v1;
    x.v1 = y.v2;
    y.v2 = temp;
}

int main()
{
    oc1.indata(36); oc2.indata(63);
    exchange(oc1, oc2);

    cout<<"The value of c1 after exchanging becomes: ";
    oc1.display();
    cout<<"The value of c2 after exchanging becomes: ";
    oc2.display();

    return 0;
}




