#include<iostream>
using namespace std;
int main(){
    int n=5,a[5]={1,-4,23,4,2},target;
    cout<<"Target= ";
    cin>>target;
    bool found=false;
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            if((a[st]+a[end])==target){
                cout<<a[st]<<" + "<<a[end]<<" = "<<target;
                cout<<"\nwe found pair at "<<st<<" and "<<end<<" index.";
                found=true;
            }
        }
    }
    if(!found){
        cout<<"Pair Not found.";
    }
    
    return 0;
    
}
