#include<iostream>
using namespace std;
int main(){

    int marks[]={23,34,45,56,67};
    int *p= marks;
    cout<<*(p)<<endl;
    cout<<*(++p)<<endl;
    // cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<*(++p)<<endl;
    cout<<*(++p)<<endl;
    cout<<"the value of marks[0] is "<<*p<<endl;
    cout<<"the value of marks[1] is "<<*(p+1)<<endl;
    cout<<"the value of marks[2] is "<<*(p+2)<<endl;
    cout<<"the value of marks[3] is "<<*(p+3)<<endl;
    cout<<"the value of marks[4] is "<<*(p+4)<<endl;

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;
    // int mathmarks[5];
    // mathmarks[0]=23;
    // mathmarks[1]=33;
    // mathmarks[2]=73;
    // mathmarks[3]=93;
    // mathmarks[4]=63;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;
    // cout<<mathmarks[4]<<endl;
    return 0;
}