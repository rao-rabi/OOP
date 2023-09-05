	#include <iostream>
	using namespace std;
	class student
	{
		string name;
	public:
	    int age;
	    bool gender;
	    
	//    default constructor
	    student(){
	    	cout<<"Default Constructor"<<endl;
		}
		
	//    parameterised constructor
	    student(string s, int a, int g){
	    	name = s;
	    	age=a;
	    	gender=g;
		}
		
	//	copy Constructor
	    student(student &a){
	    	name = a.name;
	    	age = a.age;
	    	gender = a.gender;
		}
		
	//	destructor
	    ~student(){
	    	cout<<"Destructor called"<<endl;
		}
		
	//	constructor overloading
	    student(string s){
	    	name=s;
		}
	    
	//    for getting output
	    void printInfo(){
	    	cout<<"Name: ";
	    	cout<<name<<endl;
	    	cout<<"Age: ";
	    	cout<<age<<endl;
	    	cout<<"Gender: ";
	    	cout<<gender<<endl;
		}
		
	//	operator overloading
		bool operator == (student &a){
			if(name==a.name && age==a.age && gender==a.gender){
				return true;
			}
			return false;
		}
		
	//	setter function
	    void setName(string s){
	    	name=s;
		}
	//	getter function
	    void getName(){
		    cout<<name<<endl;
	}
	};
	int main()
	{
	//    student arr[3];
	//    for(int i=0; i<3; i++){
	//    	string s;
	//    	cout<<"Name: ";
	//    	cin>>s;
	//    	arr[i].setName(s);
	//    	cout<<"Age: ";
	//    	cin>>arr[i].age;
	//    	cout<<"Gender: ";
	//    	cin>>arr[i].gender;
	//	}
	//	for(int i=0;i<3;i++){
	//		arr[i].printInfo();
	//	}
	 
	 student a("Rao Rabi", 21, 0);
	 a.printInfo();
	 student b;
	 student c = a;
	 c.printInfo();
	 student d("Rabi");
	 d.getName();
	 
	 if(c==a){
	 	cout<<"same"<<endl;
	 }
	 else{
	 	cout<<"not same"<<endl;
	 }
	    
	    return 0;
	}
