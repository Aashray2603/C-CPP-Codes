#include<iostream>
using namespace std;

 struct Employee
{
    int eId;
    char favChar;
    float salary;
} harry{70,'a',108000.00};

union Money
{
    int rice;
    char car;
    float pounds;
}M{36};

int main()
{
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch; // Value of Lunch (1) given to m1
     cout<<(m1==2)<<endl; // False since Lunch = 1
     cout<<breakfast<<endl;
     cout<<lunch<<endl;
     cout<<dinner<<endl;

     cout<<M.rice<<endl;

     cout<<harry.eId<<endl;
     cout<<harry.favChar<<endl;
     cout<<harry.salary<<endl;
    return 0;
}

