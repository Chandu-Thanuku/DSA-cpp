#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<int,int>MAP;
    int n=10,a[n];
    cout<<"Enter Elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
        MAP[a[i]]+=1;
    }
    cout<<"Enter number to know the Frequency : ";
    int num;
    cin>>num;
    cout<<"It appeared "<<MAP[num]<< " times";
}
