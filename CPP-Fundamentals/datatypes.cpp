#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
     int *p=&a,*q=&b;
    cout<<"Before Swapping:\na= "<<*p<<"\nb= "<<*q<<endl;
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
    cout<<"After Swapping:\na= "<<*p<<"\nb= "<<*q<<endl;
}
