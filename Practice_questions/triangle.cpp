#include<iostream>
using namespace std;
int main(){
    float a,b,c,s;
    cout<<"Enter three angles of a triangle: ";
    cin>>a>>b>>c;
    s=a+b+c;
    if( (s==180)&&(a!=0)&&(b!=0)&&(c!=0)){
        cout<<"Its a triangle";
    }
    else{
        cout<<"Its not a triangle";
    }
    return 0;
}