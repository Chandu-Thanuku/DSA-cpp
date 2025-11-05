#include<iostream>
#include<string>
using namespace std;
int main(){
    string word;
    cout<<"Enter Any word: ";
    cin>>word;
    int hash[256]={0};
    for(char i : word){
        hash[i]+=1;
        cout<<i<<"  ";;
        cout<<hash[i]<<endl;
    }
    cout<<"\nEnter Any Character to check in the Word: ";
    char c;
    cin>>c;
    cout<<"it Appeared "<<hash[c]<<" times.";
}
