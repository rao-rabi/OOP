#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	// ofstream out("sample.txt");
	// string st;
	// cout<<"Enter the content: ";
	// cin>>st;
	// out<<st;
	// out.close();
	ofstream out;
	out.open("sample.txt");
	out<<"This is me, Rao Rabi."<<endl;
	out<<"I am a Frontend developer."<<endl;
	out<<"I am currently working at Tower Tech";
	out.close();

	// ifstream in("sample.txt");
	string st1;
	// getline(in, st1);
	// cout<<st1;

	ifstream in;
	in.open("sample.txt");
	while (in.eof() == 0)
	{
		getline(in, st1);
		cout<<st1;
	}
	
	return 0;
}

