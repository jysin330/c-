#include<iostream>
int sum(int x, int y){
    int sum;
    sum=x+y;
    return sum;
}
// call by reference using c++ reference variable------>
int & SwapReferenceVar(int &x, int &y){
    int temp;
    temp= x;
    x=y;
    y= temp;
    return y;
}



// void SwapReferenceVar(int &x, int &y){
//     int temp;
//     temp= x;
//     x=y;
//     y= temp;
    
    // call by reference using pointer------>
// void swap(int *x, int *y){
//     int temp;
//     temp= *x;
//     *x=*y;
//     *y= temp;
    
// }
using namespace std;

int main(){
     int a=34,b=23;
     cout<<"the value of a and b is "<<a<<" and "<<b<<endl;
     cout<<"the sum is "<<sum(a,b)<<endl;
     SwapReferenceVar(a,b)=567; //this will swap a and b by reference value--->
    //  SwapReferenceVar(a,b); //this will swap a and b by reference value--->
    //  swap(&a,&b); //this will swap a and b by call by reference--->
    cout<<"the value of a and b is "<<a<<" and "<<b<<endl;


    return 0;
}