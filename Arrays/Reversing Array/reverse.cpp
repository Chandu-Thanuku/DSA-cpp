#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter size of array; ";
    cin>>n;
    m=n;
    int a[n];
    int temp;
    cout<<"Enter Elements of Array: \n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        temp=a[i];
        a[i]=a[n-1];
        a[n-1]=temp;
        n--;
        if(i==n-1)break;
        
    }
    cout<<"Reversed Array: ";
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
