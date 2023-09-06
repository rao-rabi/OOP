#include<iostream>
using namespace std;
class A{
    public:
    void funcA(){
    cout<<"Hy! I am function A"<<endl;
    }
};

class B:virtual public A{
    public:
    void funcB(){
    cout<<"Hy! I am function B"<<endl;
    }
};

class C:virtual public A {
    public:
    void funcC(){
    cout<<"Hy! I am function C"<<endl;
    }
};

class D:public B, public C{
    public:
    void funcD(){
    cout<<"Hy! I am function D"<<endl;
    }
};
int main(){
    B b1;
    C c1;
    D d1;
    d1.funcB();
    d1.funcC();
    d1.funcA();
}