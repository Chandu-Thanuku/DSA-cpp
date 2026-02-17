#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Amount in $USD(Dollar) = ";
    float dollar;
    cin>>dollar;
    float rupees=dollar*89;
    float euros=dollar*60.86;
    cout<<"$"<<dollar<<" Dollars is equals to $"<<rupees<<" INR Indian Rupees.\n";
        cout<<"$"<<dollar<<" Dollars is equals to $"<<euros<<" Euros.";
    return 0;
}
