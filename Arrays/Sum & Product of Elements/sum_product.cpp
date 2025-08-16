#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array; ";
    cin>>n;
    int a[n];
    int sum=0,product=1;
    cout<<"Enter Elements of Array: \n";
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        product*=a[i];
    }
    cout<<"sum= "<<sum;
    cout<<"\nproduct= "<<product;
    
    return 0;
}
