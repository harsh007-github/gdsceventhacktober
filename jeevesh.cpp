//program to swap two no using third variable 
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter value of a ";
    cin>>a;
    cout<<"enter value of b ";
    cin>>b;
    cout<<"\n before interchanging the value of a "<<a ;
    cout<<" and value of b "<<b;

    c=a;
    a=b;
    b=c;
    cout<<"\n after interchnging the value of a is  "<<a;
    cout<<"\tand value of b is "<<b;
    return 0;
}

  
