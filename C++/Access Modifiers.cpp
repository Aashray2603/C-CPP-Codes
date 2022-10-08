#include<iostream>
using namespace std;

class Employee
{
    private:
        int a;
    public:
        int b;
        void setData(int a1)
        {
             a = a1;
        }
        void getData()
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
};

int main(){
    Employee harry;
    // harry.a = 9; -->This will throw error as a is private
    harry.b = 36; // Direct access as b is public
    harry.setData(18); // a is accessed via member function
    harry.getData();
    return 0;
}

