#include<iostream>
using namespace std;

//double is the default type given to a  decimal literal.
//34.4 is double by default and not float, so to use it as float, you have to specify it like "34.4F,"

int main()
{

     float d=34.4F;
     long double e=34.4L;
     cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
     cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
     cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
     cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
     cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
     cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;


    return 0;
}

