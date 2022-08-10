#include<iostream>
using namespace std;
// function prototype
// type funtion-name(argument)
// int sum(int a, int b);  -----> acceptable
// int sum(int a,  b); -----> not acceptable
// int sum(int , int ); -----> acceptable
int sum(int a, int b);
// void g(void); ---> acceptable
void g();
int main(){
    int num1, num2;
    cout<<"enter the first value :";
    cin>>num1;
    cout<<"enter the second value :";
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<< "the sum is "<<sum(num1,num2); //function call
    g();
    return 0;
}
//function definition
int sum(int a, int b){
    // formal parameters are those which takes value from actual parameters i.e. a and b.
    int c;
    c=a+b;
    return c;
}
void g(){
    cout<<"hello";
}