#include<iostream>
using namespace std;
int isarmstrong(int n){
    int a=n;
    int sum=0;
    while (n!=0)
    {
        int rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(a==sum){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main(){
    int n;
    cout<<"Enter: ";
    cin>>n;
    int c= isarmstrong(n);
    if(c==1){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not an armstrong number";
    }
    return 0;
}