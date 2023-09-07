#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;
int main(){
    int arr[]={56,23,89,2,45,81};
    // to sort
    // sort(arr, arr + 6);
    // to sort in reverse order
    sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
return 0;

};