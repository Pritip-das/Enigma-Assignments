#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=1;i<=100;i++){
      if(i%3==0)
      cout<<"Fizz ";
      else if(i%5==0)
        cout<<"Buzz ";
      else{
        cout<<i<<" ";
      }
    }
    return 0;
}