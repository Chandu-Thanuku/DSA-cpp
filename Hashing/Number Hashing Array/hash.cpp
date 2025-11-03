#include<iostream>
using namespace std;
int main(){
    cout<<"Enter No of ELEMEnts: ";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter Elements: ";
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
     for(i=1;i<n;i++){
        if(a[i]>max)max=a[i];
    }
    int hash[max]={0};
   for(i=0;i<n;i++){
       hash[a[i]]+=1;
   }
   cout<<"Enter number to know the Frequency: ";
   int num;
   cin>>num;
   cout<<"It ppeared "<<hash[num]<<" times.";
    
    
    
}
