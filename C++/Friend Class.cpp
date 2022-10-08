#include<iostream>
using namespace std;
class Complex; // Forward declaration
class Calculator
{
public:
    int sumRealComplex(Complex, Complex);
    int sumImgComplex(Complex, Complex);
}calc;

class Complex
{
    int a, b;                           // Individually declaring functions as friends
    friend class Calculator;            // friend int Calculator ::sumRealComplex(Complex, Complex);
                                        // friend int Calculator ::sumImgComplex(Complex, Complex);
    public:                             // Aliter: Declaring the entire calculator class as friend
    void setNumber(int n1, int n2)
    {
        a = n1; b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
}o1,o2;

int Calculator ::sumRealComplex(Complex, Complex){ return (o1.a + o2.a); }
int Calculator ::sumImgComplex(Complex, Complex) { return (o1.b + o2.b); }
int main()
{
    o1.setNumber(1, 4); o2.setNumber(5, 7);
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumImgComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}




