#include <iostream>
using namespace std;
class Complex
{
    int a,b;

public:
    friend Complex setSum(Complex o1, Complex o2);
    void setNumber(int x,int y)
    {
        a = x;
        b = y;
    };
    void PrintNumber()
    {
        cout << "The Complex number is " << a << " + " << b << "i." << endl;
    }
};

Complex setSum(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    Complex c1,c2, sum;
    c1.setNumber(5, 8);
    c1.PrintNumber();
    c2.setNumber(6,2);
    c2.PrintNumber();
    sum = setSum(c1, c2);
    sum.PrintNumber();
    return 0;
};