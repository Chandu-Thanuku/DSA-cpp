#include<iostream>
using namespace std;
float calculator(float n1,float n2,char symbol){
    switch(symbol){
        case '+':return n1+n2; break;
        case '-':return n1-n2; break;
        case '*': return n1*n2; break;
        case '/':return n1/n2; break;
        default:{ cout<<"INvalid Operator\n";
                 char op;
                 cout<<"Enter Operator(+ , - , * , / ): ";
    cin>>op;
    calculator(n1,n2,op);
               break;
        }
    }
    return 0;
}

int main(){
    bool a =true;
    float  num1,num2;
    char symbol;
    cout<<"Enter num1: ";
    cin>>num1;
    while(a){
    cout<<"Enter num2: ";
    cin>>num2;
    cout<<"Enter Operator(+ , - , * , / ): ";
    cin>>symbol;
    float result=calculator(num1,num2,symbol);
    cout<<num1<<" "<<symbol<<" "<<num2<<" = "<<result;
    num1=result;
    cout<<"\nDo you want to continue (0/1): ";
    int choice;
    cin>>choice;
    if(choice==1){
         a=true;
    }else{
         a=false;
         cout<<"Thanks for using My Calculator.";
    }
    }

    
    return 0;
}
