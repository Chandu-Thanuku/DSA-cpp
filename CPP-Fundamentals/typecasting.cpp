#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Student{
    public:
    string name;
    int age,roll;
    Student(string n,int a,int r){
        name=n;
        age=a;
        roll=r;
    }
    void show(int index){
        cout<<"Student "<<index<<":\n";
        cout<<"NAME="<<name<<",ROLL= "<<roll<<",AGE= "<<age<<endl;
    }
};
int main(){
    string name;
    int n,age,roll;
    cout<<"Enter the number of Students: ";
    cin>>n;
    vector<Student>s;
    for(int i=0;i<n;i++){
        cout<<"Enter the NAME of Student "<<i+1<<" :";
        cin>>name;
         cout<<"Enter the Roll No of Student "<<i+1<<" :";
        cin>>roll;
         cout<<"Enter the Age of Student "<<i+1<<" :";
        cin>>age;
        s.push_back(Student(name,age,roll));
    }
    for(int i=0;i<n;i++){
        s[i].show(i+1);
    }
}
