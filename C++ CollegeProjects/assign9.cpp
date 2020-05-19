//Giancarlo Bustos 
//assigment 9
//Customer Account Manager

#include <iostream>
#include <string>
#include <conio.h>
#include <cstring>

using namespace std;
double negativeCheck(double &x);
int create(int &);
void report(int),modify(),searchingID();

struct Account {
string accountID, name;
double accountBalance;};
Account size[20];


int main (){
int input;
cout<<"This program will let you access,modify and add customer information such as "
    <<"account id , account balance and name.\n However, you can only add 20 customers and in order to access a customer information "
    <<"you need to add it but when the program is closed it will be erased."<<endl;
system ("pause");system("cls");
int real=0;// number of customers
do{

 
cout<<"\n1.Enter a new customer"
    <<"\n2.Search data of an exiting customers"
    <<"\n3.modify a customers informations"
    <<"\n4.Display data of all the customers"
    <<"\n5.To exit the program."
    <<"\nEnter the number according to the menu:";
 cin>>input;
 
switch (input){
case 1: create(real);
break;
case 2: searchingID();
break;
case 3: modify();
break;
case 4: report(real);

break;
case 5:
break;
default: cout<<"You must enter a number in the range of 1-5!"<<endl;
               system("pause");system("cls");
break;
}//end of switch
}while (input!= 5); 
return 0;
}

 
 
//-----------------------------------------------------------------------------------------------------------------------------------------------------
int create(int &n ){
int input,add,i=0;
i=n;

cout << "\nEnter data :"<<endl;
cout << "Account ID: ";
cin  >> size[i].accountID;
cout << "Name: ";
cin  >> size[i].name;
cout << "Account Balance: ";
cin  >> size[i].accountBalance;

negativeCheck(size[i].accountBalance);
 
cout << "\nNew Data : \n";
cout << "Account ID "       <<size[i].accountID<<endl;
cout << "Name: "            <<size[i].name<<endl;
cout << "Account Balance: " <<size[i].accountBalance<<endl;
i++;

 n=i;
system("pause");system("cls");
return n; 

}//end of option2
//-----------------------------------------------------------------------------------------------------------------------------------------------------
double negativeCheck(double &x){
double y;
if (x<0){
do{
cout << "Change account balance to a positive number:";
cin  >> y;    
}while (y<0);
 x=y;
}
return x;
}//end of negativeCheck
//---------------------------------------------------------------------------------------------------------------------------------------------------------
void searchingID(){
 string id;
 cout<<"Enter id: ";
 cin >>id;

for(int i=0;i<20;i++)
if(id==size[i].accountID)
{    
    cout<<"Account id: "     <<size[i].accountID      <<endl
        <<"Name: "           <<size[i].name           <<endl
        <<"Account Balance: "<<size[i].accountBalance <<endl;
        i=20;
}
system("pause");system("cls");
}
//-------------------------------------------------------------------------------------------------------------------------------------------------
void  modify(){
string id;
 
 cout << "Enter id: ";
 cin  >> id;

for(int i=0;i<20;i++){
if(id==size[i].accountID){
     cout<<"Account id: "     <<size[i].accountID      <<endl
         <<"Name: "           <<size[i].name           <<endl
         <<"Account Balance: "<<size[i].accountBalance <<endl;
          create(i);
          i=20;
}                  
}//end of for
}//end of modify

//---------------------------------------------------------------------------------------------------------------------------------------------------------------
void report(int n){
 
for(int i=0;i<n;i++){
   
    cout<<"\nAccount id: "   <<size[i].accountID      <<endl
        <<"Name: "           <<size[i].name           <<endl
        <<"Account Balance: "<<size[i].accountBalance <<endl;}
          system("pause");system("cls");}
          
          
                  
                          
