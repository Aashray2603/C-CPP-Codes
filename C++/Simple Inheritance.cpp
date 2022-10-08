#include<iostream>
using namespace std;
class A
{
private:
    int x;
public:
    void inputData(int a)
    {
        x=a;
        cout<<"\nNo. is "<<a;
    }
};
class B:public A
{
public:
    void setData(int k)
    {
        void inputData(int k);
        cout<<"No. is "<<k;
    }
};
int main()
{
    B b1;
    b1.setData(9);
    A a1;
    a1.inputData(4);
}
