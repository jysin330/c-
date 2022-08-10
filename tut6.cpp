# include<iostream>
# include<iomanip>
using namespace std;
int main(){
    int a=34;
    cout<<"the value of a is : "<<a<<endl;
    a=24;
    cout<<"the value of a is : "<<a<<endl;
    
    // constant in c++
    const int b=23;
    cout<<"the value of b is : "<<b<<endl;
    // b=34;---> u will get an error because b is constant
    cout<<"the value of b is : "<<b<<endl;

    // manipulators
    int x=23,y=45,z=6734;
    cout<<"the value of x without setw is : "<<x<<endl;
    cout<<"the value of y without setw is : "<<y<<endl;
    cout<<"the value of z without setw is : "<<z<<endl;

    cout<<"the value of x is : "<<setw(4)<<x<<endl;
    cout<<"the value of y is : "<<setw(4)<<y<<endl;
    cout<<"the value of z is : "<<setw(4)<<z<<endl;
    
    // operator precedence
    int d=23,e=45;
    int f= ((((d*2)+e)-45)+34);
    cout<<f;

    
    return 0;

}