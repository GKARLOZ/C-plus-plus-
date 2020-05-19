//Giancarl Bustos   
//assignment8 
//Password program. Verifies the character of a password. 

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void passWordCheck();

int main()
{
    cout<<"This program will check if the password you put has all the requirements:\n1. Six charecters long.\n2.At least one uppercase and lowercase letter.\n3.At least one digit."<<endl;
          system("pause");system("cls");
        
          passWordCheck();
          system("pause");
    return 0;
}//end of main 

 
void passWordCheck()
{
   string input;
  bool lowerCase= false,upperCase= false,digit= false, acceptable=false;
  
        do{
    cout  << "Enter password:";
    cin   >>input;
  int  passSize= input.size();

    
    for (int i = 0; i < passSize; i++) {
     if (isdigit(input[i]))
                 digit= true;
     if (islower(input[i]))
               lowerCase= true;
    if (isupper(input[i]))
               upperCase= true;
                  }
 
    
    if (digit && lowerCase && upperCase &&  (passSize >= 6))
                 {acceptable=true;
                 cout << "Password Accepted" << endl;}
    else
        cout << "Password needs to have all the requirements.\n(six characters,one digit,one upper and lower case.)" << endl;
        }while(acceptable!=true);
}//end of passwordCheck
