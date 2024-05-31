#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter length in cm : ";
    cin>>a;
    b=a/100;
    cout<<"Entered length in m: "<<b<<endl;
    c=a/100000;
    cout<<"Entered length in km: "<<c<<endl;
    return 0;
}