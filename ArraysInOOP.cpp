#include<iostream>
using namespace std;
class Shop{
	int itemId[10];
	int itemPrice[10];
	int counter;
	public:
		void initCounter(){
			counter = 0;
		}
		void setPrice();
		void displayPrice();
};

void Shop :: setPrice(){
	cout<<"Enter Id of Your item no." <<counter + 1 <<endl;
	cin>>itemId[counter];
	cout<<"Enter Price of your item" << endl;
	cin>>itemPrice[counter];
	counter++;
}
void Shop :: displayPrice(){
	for(int i=0; i<counter;i++){
		cout<<"The price of Item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
	}
}
int main(){
	Shop Groccery;
	Groccery.initCounter();
    Groccery.setPrice();
	Groccery.displayPrice();
	Groccery.setPrice();
	Groccery.displayPrice();
	Groccery.setPrice();
	Groccery.displayPrice();
	Groccery.setPrice();
	Groccery.displayPrice();

}
