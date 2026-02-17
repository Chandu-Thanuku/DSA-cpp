#include<iostream>
using namespace std;
int main(){
    float sum=0,n;
    bool entered=true;
    cout<<"Enter the sales Amount:\n";
    while(entered){
        cin>>n;
        sum+=n;
        if(n==0){
            entered=false;
        }
    }
    cout<<"The Total Amount Should be paid is Rs."<<sum<<" .";
    return 0;
}
