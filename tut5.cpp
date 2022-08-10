#include<iostream>
 using namespace std;
 int c=3;
 int main(){

// *********DATA TYPES*********
int a,b,c;
cout<<"enter the value of a is "<<endl;
cin>>a;
cout<<"enter the value of b is "<<endl;
cin>>b;
c= a+b;
cout<<"sum of a and b is : "<<c<<endl;
// '<<::c'  is called scope resolution variable
cout<<"the size of 34.5L is "<<sizeof(34.5L)<<endl;
cout<<"the globle c is "<<::c<<endl; 

// *********FLOAT, DOUBLE, LONG LITERALS*************
float d= 34.5f;
long double e= 34.5l;
cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e<<endl;
cout<<"the size of 34.5 is "<<sizeof(34.5)<<endl;
cout<<"the size of 34.5f is "<<sizeof(34.5f)<<endl;
cout<<"the size of 34.5F is "<<sizeof(34.5F)<<endl;
cout<<"the size of 34.5l is "<<sizeof(34.5l)<<endl;
cout<<"the size of 34.5L is "<<sizeof(34.5L)<<endl;

// **********REFERENCE VARIABLES**********
float x=455;
float & y= x;
cout<<"the value of x is "<<x<<endl;
cout<<"the value of y is "<<y<<endl;

// // **********typecasting**********
int a=45;
float b=46.67;
cout<<"the value of a is :"<<float(a)<<endl;
cout<<"the value of b is :"<<(float)b<<endl;
cout<<"the value of a is :"<<int(a)<<endl;
cout<<"the value of a is :"<<(int)b<<endl;
int c= int(b);
cout<<"the expression is "<<a+b<<endl;
    cout<<"the expression is "<<a+int(b)<<endl;
    cout<<"the expression is "<<a+(int)b<<endl;
    
return 0;
 }
