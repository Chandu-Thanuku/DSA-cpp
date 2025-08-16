#include<iostream>
using namespace std;
void isUnique(int arr[],int n){
    cout<<"Unique Elements are: \n";
    int a=0;
   for(int i=0;i<n;i++){
       bool isUnique=true;
       for(int j=0;j<n;j++){
           if(i!=j && arr[i]==arr[j]){
               isUnique=false;
           }
       }
       if(isUnique){
           cout<<arr[i]<<" ";
           a=1;
       }
   } 
   if(a==0){
       cout<<"Error No Unique elements.";
   }
}
int main(){
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    cout<<"Enter elements in the array:\n";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    isUnique(a,n);
    return 0;
}
