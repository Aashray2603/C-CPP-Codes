#include<iostream>
#include<stdlib.h>
using namespace std;

class binary
{
private: string s;  void chk_bin(void);
public:
    void read(void) {cout << "Enter a binary number:"; cin >> s;}
    void ones_compliment(void);
    void display(void){ cout<<"Displaying your binary number:";
                            for (int i = 0; i < s.length(); i++)
                            {cout << s.at(i);}
                            cout<<endl;
                       }
}b;
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit (0);
        }
    }
}
void binary::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}
int main()
{
    b.read(); b.display(); b.ones_compliment(); b.display();
    return 0;
}

