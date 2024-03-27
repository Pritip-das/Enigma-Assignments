#include<iostream>
using namespace std;
int main()
{
    int n,s=0,a;
    cout<<"Enter a number: ";
    cin>>n;
    do{
        a=n%10;
        s=s+a;
        n=n/10;
    }
    while(n!=0);
    cout<<s;
    return 0;
}