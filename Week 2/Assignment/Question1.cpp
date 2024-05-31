#include<iostream>
using namespace std;

int findnum (int arr[],int n){
    int m;
    cout<<"Enter: ";
    cin>>m;
    int count=0;
    for(int i=0;i<n;i++){
            if(m==arr[i]){
                count++;

            }
            
    }
    return count;
}
int main(){
    int arr[6]={2,4,3,2,2,3};
    int c = findnum (arr,6);
    cout<<c;
    return 0;
}