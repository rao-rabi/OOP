#include <iostream>
#include <list>
using namespace std;

void display(list<int> &ls)
{
    list<int>::iterator iter;
    for (iter = ls.begin(); iter != ls.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

void inputData(list<int> &ls)
{
    int element, size;
    cout << "Enter the size: \n";
    cin >> size;
    cout << "Enter the elements: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        ls.push_back(element);
    }
}

int main()
{
     list<int> list1;
     list1.push_back(5);
     list1.push_back(4);
     list1.push_back(2);
     list1.push_back(76);
     list1.push_back(22);

     list1.sort();
     display(list1);

    list<int> list2;
    inputData(list2);
    list2.sort();
    display(list2);
    list1.merge(list2);
    display(list1);


    return 0;
};