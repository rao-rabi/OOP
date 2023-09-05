#include <iostream>
using namespace std;

class AbstractGetPromoted
{
    virtual void getPromotion() = 0;
};

class Company : AbstractGetPromoted
{
private:
    int age;

protected:
    string name;

public:
    Company(string Name, int Age)
    {
        name = Name;
        age = Age;
    }
    void setEmployee(string n, int a);
    void getEmployee();
    void getPromotion();
    virtual void Work()
    {
        cout << name << " is cheking his email and perofrming actions..." << endl;
    };
};

void Company ::setEmployee(string n, int a)
{
    name = n;
    age = a;
};

void Company ::getEmployee()
{
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
}
void Company ::getPromotion()
{
    if (age > 25)
    {
        cout << name << " got Promoted" << endl;
    }
    else
    {
        cout << name << " not Promoted" << endl;
    }
}

// inherited subclasses from parent class --->class herarichies
class Developer : public Company
{
public:
    string StackWorking;
    Developer(string Name, int Age, string Stack) : Company(Name, Age)
    {
        StackWorking = Stack;
    };
    void ShowData()
    {
        cout << name << " is Working on " << StackWorking << endl;
    };
    void Work()
    {
        cout << name << " is an expert in "<<StackWorking << endl;
    };
};

class SoftwareEngineer : public Company
{
public:
    string skill;
    int salary;
    SoftwareEngineer(string Name, int Age, string Skill, int Salary) : Company(Name, Age)
    {
        skill = Skill;
        salary = Salary;
    }
    void dataSoftwareEng()
    {
        cout << name << " has " << skill << " Skills "
             << "and his salary is " << salary << endl;
    }
    void Work()
    {
        cout << name << " is ordering to ASE to Develop Website." << endl;
    }
};

// inherited subclass from another subclass --> Multipe Inheritance

class Role : public Developer
{
public:
    string rank;
    int experience;
    Role(string Name, int Age, string Stack, int Experience, string Rank) : Developer(Name, Age, Stack)
    {
        rank = Rank;
        experience = Experience;
    };
    void showRank()
    {
        cout << name << " is working on " << StackWorking << " with experience of " << experience << " years at role of " << rank << endl;
    };
    void Work()
    {
        cout << name << " is best fit for this "<<rank <<" role."<< endl;
    }
};

int main()
{
    Developer d1 = Developer("Rao Rabi", 21, "MERN Stack");

    SoftwareEngineer s1 = SoftwareEngineer("Ahmad", 28, "Mean Stack Developer", 200000);
    Role r1 = Role("Ali", 26, "Mean Stack", 5, "ASE");

    Company *e1 = &d1;
    Company *e2 = &s1;
    Company *e3 = &r1;

    e1->Work();
    e2->Work();
    e3->Work();
    // d1.Work();
    // s1.Work();
    // r1.Work();
}