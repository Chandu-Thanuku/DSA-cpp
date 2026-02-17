#include<iostream>
using namespace std;
int main(){
    double result;
    cout<<"Which coversion do you want?\nCelcius->fahrenhit(Enter 0)\nFahrenhit->Celcius(Enter 1) ";
    int choice;
    cin>>choice;
    if(choice==0){
        cout<<"Enter temperatire in Celcius= ";
        float celcius;
        cin>>celcius;
        result=(9.0/5.0)*celcius+32;
        cout<<celcius<<" degree celcius equal to "<<result<<" Fahrenhit.";
    }else if(choice==1){
           cout<<"Enter temperatire in Fahrenhit= ";
        float fahrenhit;
        cin>>fahrenhit;
        result=(5.0/9.0)*(fahrenhit-32);
        cout<<fahrenhit<<" fahrenhit equal to "<<result<<" degree celcius..";
    }else{
        cout<<"INVALID OPTION";
    }
    return 0;
}
