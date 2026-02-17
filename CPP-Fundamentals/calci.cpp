#include<iostream>
using namespace std;
int main(){
    float principal,rate,time;
    cout<<"Enter Principal Amount= ";
    cin>>principal;
cout<<"Enter Rate of interet in % = ";
cin>>rate;
cout<<"Enter time in years= ";
cin>>time;
float interest=(principal*time*rate)/100;
float amount=principal+interest;
cout<<"Interest Amount You will get = "<<interest<<endl;
cout<<"Total amount You will get = "<<amount;
    
    return 0;
}
