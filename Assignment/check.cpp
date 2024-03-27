#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>0){
        cout<<"Psoitive";
    }
    else if(n<0){
        cout<<"Negative";
    }
    else{
        cout<<"Zero";
    }
    return 0;
}