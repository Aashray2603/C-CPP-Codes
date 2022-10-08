# include<iostream>
using namespace std;
void f1();

int var=36;

int main()
{
    int var=9;
    var=18;
    cout<<"Local Value of var="<<var<<endl;
    bool is_true = false;
    cout<<"Boolean Value of var="<<is_true<<endl;
    f1();
  return 0;
}
void f1()
{
    cout<<"Global Value of var="<<var;
}

