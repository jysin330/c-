#include<iostream>
using namespace std;
int main(){
    // there are three type of loop in c++ --->
    // 1) for loop
    // 2) while loop
    // 3) do while loop
    
    // syntex for for loop ----->
    // for(initialisation;condition; updation){
    //     loop body (c++ code);
    // }

    for (int i = 0; i < 4; i++)
    {
        cout<<i<<endl;
    }
    // example of infinite loop----->
    //  for (int i = 0; 2 < 4; i++)
    // {
    //     cout<<i<<endl;
    // }

    //  while loop in c++     ------>
    // syntex
    // while (condition){
    //     c++ statement;
    //     updation;
    // }
    //  printing to 40 uning while loop----->
    int j=0;
     while(j<=4) {
        cout<<j<<endl;
        j++;
    }
    // do while loop in c++     ------>
    // syntex
    // do{
    //     c++ statement;
    //     updation;
    // }while (condition);
    int k=0;
     do {
        cout<<k<<endl;
        k++;
    }while(k<=4);
    return 0;
}