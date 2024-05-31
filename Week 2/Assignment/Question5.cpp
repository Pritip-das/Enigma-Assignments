#include <iostream>                 
using namespace std;
int main(){
    int arr1[10],arr2[10];
    int n1;
    cout << "Enter the size of arr1: ";
    cin >> n1;
    cout << "Enter " << n1 << " elements for arr1: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
        arr2[i]=arr1[i];
    }
    //printing arr2
     cout<<"Elements of arr2: ";
    for(int i=0;i<n1;i++){
       cout<<arr2[i];
        cout<<" ";
    }    
}