#include<iostream>
using namespace std;

int main(){
    // what is a pointer? -----> data type which hold the address of other datatype.
    int a=3;
    int *b=&a;
    //'&' ---> (address of) operator
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;
    
    //'*' ---> (value at) dereference operator
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of a is "<<*b<<endl;

    int **c=&b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value at address c is"<<*c<<endl;
    cout<<"the value at address value at (value at (c)) c is"<<**c<<endl;
    return 0;
}