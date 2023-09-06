#include <iostream>
using namespace std;

class Complex;
class Calculator
{
    public:
    int setRealSum(Complex, Complex);
    int setCompSum(Complex, Complex);
};

class Complex
{
    int a, b;

public:
    friend class Calculator;
    void setNumber(int x, int y)
    {
        a = x;
        b = y;
    };
    void PrintNumber()
    {
        cout << "The Complex number is " << a << " + " << b << "i." << endl;
    }
};

int Calculator ::setRealSum(Complex o1, Complex o2)
{
    cout << "sum of real number is: " << o1.a + o2.a << endl;
};

int Calculator ::setCompSum(Complex o1, Complex o2)
{
    cout << "Sum of Complex part is: " << o1.b + o2.b<<"i" << endl;
};

int main()
{
    Complex o1, o2;
    o1.setNumber(5, 8);
    o2.setNumber(3, 2);
    Calculator calc;
    calc.setRealSum(o1, o2);
    calc.setCompSum(o1, o2);

    return 0;
};