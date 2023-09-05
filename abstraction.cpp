#include<iostream>
using namespace std;

class AbstractGetPromoted{
    virtual void getPromotion()=0;
};

class Company:AbstractGetPromoted{
    private:
    string name;
    int age;
    public:
    void setEmployee(string n, int a){
        name=n;
        age=a;
    };

    void getEmployee(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
    void getPromotion(){
        if (age>25){
            cout<<name<<" got Promoted"<<endl;
        }
        else{
            cout<<name<<" not Promoted"<<endl;
        }
    }
};

int main() {
    Company emp1,emp2,emp3,emp4;
    emp1.setEmployee("John", 25);
    emp1.getEmployee();
    emp1.getPromotion();

    emp2.setEmployee("Ali", 29);
    emp2.getEmployee();
    emp2.getPromotion();

    emp3.setEmployee("Ahmad", 19);
    emp3.getEmployee();
    emp3.getPromotion();
    
    emp4.setEmployee("Niaz", 24);
    emp4.getEmployee();
    emp4.getPromotion();
}