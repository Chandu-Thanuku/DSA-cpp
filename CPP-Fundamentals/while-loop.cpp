#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    cout<<"Enter: ";
   getline(cin,input); // To get full line with spaces
    int A=0,E=0,I=0,O=0,U=0;
    for(char i : input){
        i=tolower(i); // To convert to Lower
        if(i=='a')A++;
        else if(i=='e')E++;
        else if(i=='i')I++;
        else if(i=='o')O++;
        else if(i=='u')U++;
    }
    cout<<"Vowels in the Input:\n";
    cout<<"A--"<<A<<endl;
    cout<<"E--"<<E<<endl;
    cout<<"I--"<<I<<endl;
    cout<<"O--"<<O<<endl;
    cout<<"U--"<<U<<endl;
}
