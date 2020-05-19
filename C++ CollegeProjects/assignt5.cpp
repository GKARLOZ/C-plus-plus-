//Giancarlo Bustos
//assigment 05
// This program is a physics calculator with limited amount of options to calculate


#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

void Speed(),Dinstance(),BarVolume(),SphereVolume(),CylinderVolume();


double speedCal(double,double,double), valuesPositive(double x,double y,double z), distanceCal(double t,double a),BarVolumeCal(double w,double h,double l);
double SphereVolumeCal(double r) ,CylinderVolumeCal(double r,double h);


int main (){

int person;

              cout <<"Physic calculator\nCalculates speed,distance,bar volume,sphere volume and cylinder volume.\n Press any key to continue. ";
               getch(); system("cls");

do{      
     cout  <<"What type of Calculation would you like to use?\n \t\n1.Speed\t\n2.Distance\t\n3.BarVolume.\t\n4.SphereVolume\t\n5.CylinderVolume\t\n6.Exit Program \n\nSelection (1,2,3,4,5 or 6):"  ; 
     cin   >> person; 

switch (person){

case 1: Speed();
break;
case 2: Dinstance();
break;
case 3: BarVolume();
break;
case 4: SphereVolume();
break;
case 5: CylinderVolume();
break;
case 6:
break;

default: cout<<"You must enter a number in the range of 1-6!\n\nPress any key to continue....."<<endl;
               getch();system("cls");
break;}
}while (person!= 6); 
return 0;}

//-----------------------------------------------------------------------------------------------------------------------------------------------------

void Speed(){
double t,v,a;
bool values;
do{

cout<<"How many seconds of acceleration (value of t)? ";                      cin>>t;
cout<<"How many meters per second initially traveld(value of v)?";            cin>>v;
cout<<"How many meters per second per second(value of a)?";                   cin>>a;
if (t<=0 || v<=0 || a<=0) {cout<<"All values need to be positive.\n\n";values=false;}
else values=true;
}while(values!=true);

cout<<"Formula: speed=v+at\n"<<"t:"<<t<<"\nv:"<<v<<"\na:"<<a<<"\nSpeed:"<<speedCal(t,v,a)<<"\nPress any key to continue....."<<endl;
               getch();system("cls");

}

double speedCal( double t,double v,double a)
{double speed=v+(a*t);
return speed;}
//---------------------------------------------------------------------------------------------------------------------------------------------------

void Dinstance(){
double t,a;
bool values;
do{

cout<<"How many seconds traveled that started at rest? (value of t)? ";                      cin>>t;
cout<<"How many meters per second per second was accelerated(value of a)?";                 cin>>a;
if (t<=0 || a<=0) {cout<<"All values need to be positive.\n\n";values=false;}
else values=true;
}while(values!=true);

cout<<"Formula: distance=(at^2)/2\nt:"<<t<<"\na:"<<a<<"\nDistance:"<<distanceCal(t,a)<<"\nPress any key to continue....."<<endl;
               getch();system("cls");

}

double distanceCal(double t,double a){
double distance= ((a*(t*t))/2);
return distance;
}
//--------------------------------------------------------------------------------------------------------------------------------------

void BarVolume(){
double w,h,l;
bool values;
do{

cout<<"What is the width(value of w)? ";                      cin>>w;
cout<<"what is the height(value of h)?";                      cin>>h;
cout<<"what is the length(value of l)";                       cin>>l;
if (w<=0 || l<=0 || h<=0) {cout<<"All values need to be positive.\n\n";values=false;}
else values=true;
}while(values!=true);


cout<<"\nFormula: bar volume= wlh\nw:"<<w<<"\nh:"<<h<<"\nl:"<<l<<"\nBar Volume:"<<BarVolumeCal(w,h,l)<<"\nPress any key to continue....."<<endl;
               getch();system("cls");
}

double BarVolumeCal(double w,double h,double l){
double result= w*h*l;
return result;
}
//------------------------------------------------------------------------------------------------------------------------------------------
void SphereVolume(){
double r;
bool values;
do{

cout<<"What is the radius of the sphere?(value of r ) ";                      cin>>r;
if (r<=0 ) {cout<<"All values need to be positive.\n\n";values=false;}
else values=true;
}while(values!=true);


cout<<"\nFormula: Sphere Volume = (4(Pi)r^3)/3\nr:"<<r<<"\nBar Volume:"<<SphereVolumeCal(r)<<"\nPress any key to continue....."<<endl;
               getch();system("cls");
}

double SphereVolumeCal(double r){
const double Pi=3.1415926535;
double result= (4*Pi*(r*r*r))/3 ;
return result;}
//---------------------------------------------------------------------------------------------------------------------

void CylinderVolume(){
double r,h;
bool values;
do{

cout<<"What is the radius of the sphere?(value of r ) ";                      cin>>r;
cout<<"What is the height of the cylinder?(value of h)";                      cin>>h;
if (r<=0|| h<=0) {cout<<"All values need to be positive.\n\n";values=false;}
else values=true;
}while(values!=true);


cout<<"\nFormula: Cylinder Volume= Pi*(r^2)*h\nr:"<<r<<"\nh:"<<h<<"\nCylinder Volume:"<<CylinderVolumeCal(r,h)<<"\nPress any key to continue....."<<endl;
               getch();system("cls");
}

double CylinderVolumeCal(double r,double h){
const double Pi=3.1415926535;
double result= (Pi*(r*r)*h) ;
return result;}

