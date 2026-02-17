#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    if(n<=1) return false;
    if(n==2 || n==3) return true; 
    if(n%2==0 || n%3==0) return false;
      for(int i=5;i<=sqrt(n);i+=6){
              if(n%i==0 || n % (i+2) ==0){
                  return false;
              }
           }
            return true;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Prime numbers from 1-"<<n<<" are:\n";
    if(n<1){
        cout<<"Invalid\nNo prime numbers";
    }else{
    for(int i=1;i<=n;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    }
    return 0;
}
    
