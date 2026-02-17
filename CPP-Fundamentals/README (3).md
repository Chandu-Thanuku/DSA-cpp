#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
   int fact=1;
for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    
    cout<<"The Factorial of "<<n<<" = "<<fact;
    if(n<0){
        cout<<"The Factorial cannot be Determined.";
    }
    
    return 0;
}
