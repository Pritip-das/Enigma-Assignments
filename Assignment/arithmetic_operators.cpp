#include<iostream>
using namespace std;
int main(){
    float a,b;
    int n;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter n:";
    cin>>n;
    switch(n){
       case 1:cout<<a+b; break;
       case 2:cout<<a-b; break;
       case 3:cout<<a*b; break;
       case 4:cout<<a/b; break;
       case 5:cout<<(int)a%(int)b; break;
    }
    return 0;
} 