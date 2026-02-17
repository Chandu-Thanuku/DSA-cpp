#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cout<<"Enter your Input: ";
    cin>>a;
    bool palindrome=true;
    int n=a.length();
    for(int i=0;i<n;i++){
       if(a[i]!=a[n-i-1]) palindrome=false;
    }
    if(palindrome){
        cout<<"Given Input is a Palindrome";
    }else{
        cout<<"Given Input is NOT a Palindrome";
    }
    
}
