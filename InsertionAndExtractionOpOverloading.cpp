#include <iostream>
using namespace std;

class Test
{
    int age1, age2;

public:
    friend istream &operator>>(istream &in, Test &obj);
    friend ostream &operator<<(ostream &out, Test &obj);
};

istream &operator>>(istream &in, Test &obj)
{
    cout << "Enter Age for first student: ";
    in >> obj.age1;
    cout << "Enter Age for second student: ";
    in >> obj.age2;
    return in;
}

ostream &operator<<(ostream &out, Test &obj)
{
    cout << "The Age of first student is: ";
    out << obj.age1<<endl;
    cout << "The Age of second student is: ";
    out << obj.age2;
    return out;
}

int main()
{
    Test obj;
    cin >> obj;
    cout << obj;
}