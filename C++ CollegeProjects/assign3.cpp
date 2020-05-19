// Giancarlo Bustos     
// assigment 03 
// Bill Calculation program: calculates customer's monthly bill based on the package 

#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int main (){

char customerPackage;
int customerHours, count=0;
double totalA=9.95, totalB=14.95,totalC=19.95;
bool quit=true,quitH=true;

do{
cout<<" Enter the amount of hours in order to calculate your bill : "<<endl;
cin>> customerHours;
if (customerHours<744){quitH=false;}}while(quitH);

do{

cout<<" Internet Service Provider"<<endl
    <<"Package A:    For    $9.95    per month   10    hours of access are provided. Additional hours are  $2.00  per hour."<<endl
    <<"Package B:    For    $14.95   per month   20    hours of access are provided. Additional hours are  $1.25   per hour."<<endl
    <<"Package C:    For    $19.95   per month   unlimited access is provided."<<endl
    <<"-------------------------------------------------------------------------------------------------------------------------"<<endl
    <<"Enter the Package letter or q to Quit the program :"<<endl;
cin>>customerPackage;

switch (customerPackage){

case'q':
case'Q':
cout   <<"Quit program"<<endl;
quit=false;
break;


case 'A':
case 'a':
cout   << "Parkgae A : FOR $9.95 per month 10 hours of access are provided.Additional hours are $2.00 per hour."<<endl;
cout   << "Hours:"<<customerHours<<endl;
  if (customerHours>10){totalA=(customerHours-10)*2+9.95;};
cout   << "$"<<totalA<<endl;
break;

case 'B':
case 'b':
cout    <<"Package B : For $14.95 per month 20 hours of access are provided. Additional hours are $1.25 per hour."<<endl;
cout    <<"Hours:"<<customerHours<<endl;
  if    (customerHours>10){totalB=(customerHours-10)*1.25+14.95;};
cout    << "$"<<totalB<<endl;
break;

case 'C':
case 'c':
cout    <<"Package C : For $19.95 per month unlimited access is provided. "<<endl;
cout    << "Hours:"<<customerHours<<endl;
cout    << "$"<<totalC<<endl;
break;

}//end of switch 
}while (quit);
return 0;
}

