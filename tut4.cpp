
// there are two header files:
// 1> system header file:  it come with compilers.
# include<iostream>
// 2> user define header file: it is written the programmer
// #include "this.h" -->this will produce an error if this.h is not present in current directory.
using namespace std;
int main(){
    int a =4, b=5;

    cout<<"operators in c++"<<endl;
    cout<<"following are the type of operators"<<endl;
    // arthimatic operator
    cout<<"\nthe value of a+b is :"<< a+b;
    cout<<"\nthe value of a-b is :"<< a-b;
    cout<<"\nthe value of a*b is :"<< a*b;
    cout<<"\nthe value of a/b is :"<< a/b;
    cout<<"\nthe value of a++ is :"<< a++;
    cout<<"\nthe value of a-- is :"<< a--;
    cout<<"\nthe value of ++b is :"<< ++b;
    cout<<"\nthe value of --b is :"<< --b;

    //assignment operators -->used to assign value in variable
    //int a=3, b=9;
    //char d = 's';

    //comparision operators
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;

    //logical operator-->
    cout<<"following are the logical operators in c++"<<endl;
    cout<<"the value of ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout<<"the value of ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    cout<<"the value of !(a<b)) is "<<!(a<b)<<endl;
    


    return 0;

}