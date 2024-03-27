#include<iostream>
using namespace std;
int main(){
    float a,b;
    int n;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter n: ";
    cin>>n;
    switch(n){
       case 1:cout<<a+b;
       case 2:cout<<a-b;
       case 3:cout<<a*b;
       case 4:cout<<a/b;
       case 5:cout<<(int)a%(int)b;
    }
    return 0;
} 