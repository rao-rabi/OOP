#include<iostream>
using namespace std;

template <class T>

class Vector{
    T a;
    T b;
    public:
    void setData(T x, T y){
        a=x;
        b=y;
    };
    void getData(){
        cout<<"The sum of all numbers is: "<<a + b <<endl;
    };

};
int main(){
    Vector <int>obj;
    obj.setData(3,6);
    obj.getData();
    Vector <float>obj2;
    obj2.setData(3.4,6.2);
    obj2.getData();
    Vector <double>obj3;
    obj3.setData(2.3,5.1);
    obj3.getData();

return 0;
 
};