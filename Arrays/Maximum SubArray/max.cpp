#include<iostream>
using namespace std;
int main(){
    int n=5,a[5]={-11,2,10,-8,23};
    int max_sum=0;
    int x=0,y=0;
    for(int st=0;st<n;st++){
        int cur_sum=0;
        for(int end=st;end<n;end++){
           cur_sum+=a[end];
           if(cur_sum>max_sum){
               max_sum=cur_sum;
               x=end;y=st;
           }
          }
       
    }
    for(int m=y;m<=x;m++){
           cout<<a[m]<<" ";
       } 
    cout<<"\nmax="<<max_sum;
    return 0;
    
}
