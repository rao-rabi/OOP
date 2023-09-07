#include <iostream>
#include <vector>
using namespace std;

 void display(vector<int> &v)
 {
     for (int i = 0; i < v.size(); i++)
     {
         cout<< v[i] << " " << endl;
     }
     cout<<endl;
 }
int main()

{
    vector<int> vec1;
    int element, size;
    cout << "Enter the size of vector: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element you want to push to vector: ";
        cin >> element;
        vec1.push_back(element);
    }
     vec1.pop_back();
     display(vec1);
     vector <int> ::iterator iter = vec1.begin();
     vec1.insert(iter,530);
     display(vec1);
//    vector <int> foo(3,100);
//    vector <int> bar(5,25);
//    foo.swap(bar);
//
//    cout<<"foo contains: ";
//    for(unsigned i=0; i<foo.size();i++){
//        cout<<foo[i]<<endl;
//    };
//
//      cout<<"bar contains: ";
//    for(unsigned i=0; i<bar.size();i++){
//        cout<<bar[i]<<endl;
//    };

    return 0;
}
