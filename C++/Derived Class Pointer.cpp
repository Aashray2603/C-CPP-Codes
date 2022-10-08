#include<iostream>
using namespace std;

class Base
{
    public:
        int var_base=1;
        virtual void display()
        {
            cout<<"Base class variable var_base = "<<var_base<<endl;
        }
};

class Derived : public Base
{
    public:
            int var_derived=2;
            void display()
            {
                cout<<"Base class variable var_base = "<<var_base<<endl;
                cout<<"Derived class variable var_derived = "<<var_derived<<endl;
            }
};

int main()
{
    Derived d1;         // Derived Class object created
    Base *bp;           // Base Class pointer created
    bp = &d1;           // Pointer "bp" of the base class is pointing to the object "d1" of the derived class
    bp->display();      // The function "display" is called using the pointer "bp" of the base class.
    Base b1;            // Base Class object created
    bp = & b1;          // Pointer "bp" of the base class is pointing to the object "b1" of the base class
    bp->display();      // The function "display" is called using the pointer "bp" of the base class.

    return 0;
}
