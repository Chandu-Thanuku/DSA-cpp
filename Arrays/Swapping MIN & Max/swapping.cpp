#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array; ";
    cin>>n;
    int a[n];
    int min,max;
    cout<<"Enter Elements of Array: \n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
min=a[0];
max=a[0];
    int x=0,y=0;
     for(int i=0;i<n;i++){
       if(a[i]>max){max=a[i];x=i;}
       else if(a[i]<min){min=a[i];y=i;}
    }
    cout<<"Before Swapping MIN & MAX:\n";
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nMinimum: "<<min<<" at "<<y<<"\n";
    cout<<"Maximum:  "<<max<<" at "<<x<<"\n";
    int temp=a[y];
    a[y]=a[x];
    a[x]=temp;
    cout<<"After Swapping MIN & MAX:\n";
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}
