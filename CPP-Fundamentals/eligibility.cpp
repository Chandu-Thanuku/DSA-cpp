#include<iostream>
#include<cctype> // islowe, isupper, isdigit
#include<string>
using namespace std;
bool strongPassword(string password){
      bool isLower=false,isUpper=false,hasDigits=false,
      hasSymbol=false;
      for(char letter : password ){
          if(isupper(letter)) isUpper=true;
            else if(islower(letter)) isLower=true;
               else if(isdigit(letter)) hasDigits=true;
                  else   hasSymbol=true;
      }
      return (password.length() >= 8 && isLower && isUpper &&
      hasDigits && hasSymbol);
}
int main(){
    string password,username;
    cout<<"<============= Welcome To Login Page =========>\n";
    cout<<"Enter User name: ";
    cin>>username;
    cout<<"Enter Password: ";
    cin>>password;
    if(strongPassword(password)){
        cout<<"Password is Strong✅ "  ;
    }else{
        cout<<"Password is weak ❌\n";
cout<<"Suggestions for a strong password:\n";
cout<<"- At least 8 characters\n";
 cout<<"- Include uppercase and lowercase letters\n";
 cout<<"- Include numbers\n";
 cout<<"- Include special symbols (!@#$%^&*)";
    }
    
  return 0;  
}
