#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee:";
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
        cout << "The salary of this employee is " << salary <<endl;
    }
};

int main()
{

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}

