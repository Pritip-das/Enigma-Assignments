#include<iostream>
using namespace std;
int main(){
    int m,b,c,p,u;
    float a,g,s;
    cout<<"Enter marks obtained in math: ";
    cin>>m;
     cout<<"Enter marks obtained in BEE: ";
    cin>>b;
     cout<<"Enter marks obtained in CDS: ";
    cin>>c;
     cout<<"Enter marks obtained in physics: ";
    cin>>p;
     cout<<"Enter marks obtained in UHV: ";
    cin>>u;
    s=m+b+c+p+u;
    cout<<"Sum: "<<s<<endl;
    a=s/5;
    cout<<"Average: "<<a<<endl;
    g=(s/500)*100;
    cout<<"Percentage: "<<g;
    return 0;
}