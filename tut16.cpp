// inline functions, default arguments, & constant arguments in c++ ----->
// Compiler may not perform inlining in such circumstances like:
// 1) If a function contains a loop. (for, while, do-while)
// 2) If a function contains static variables.
// 3) If a function is recursive.
// 4) If a function return type is other than void, and the return statement doesn’t exist in function body.
// 5) If a function contains switch or goto statement.

#include<iostream>
using namespace std;
//  inline int product(int x, int y){
//      static int c=2; //this execute only once
//      c=c+1;//next time this function is run,the value of c will be retained
//     return x*y+c;
// }

// int product(int x, int y){
// static int c=2; //this execute only once
// c=c+1;//next time this function is run,the value of c will be retained
//     return x*y+c;
// }

// int product(int x, int y){
//     return x*y;
// }
float moneyrecieved(int currentmoney, float factor=1.04){
    // 100000 *(1+4/100)--->1.04*100000= 104000  
    return currentmoney*factor;
}
int main(){
    // int a,b;
    // cin>>a;
    // cin>>b;
    // cout<<"the value of a is "<<a<<" & the value of b is "<<b<<endl;
    // cout<<"the product of a aand b is "<<product(a,b)<<endl;
    // cout<<"the product of a aand b is "<<product(a,b)<<endl;
    // cout<<"the product of a aand b is "<<product(a,b)<<endl;
    // cout<<"the product of a aand b is "<<product(a,b)<<endl;
    // cout<<"the product of a aand b is "<<product(a,b)<<endl;
    // cout<<"the product of a aand b is "<<product(a,b)<<endl;
     int money=100000;
    cout<<"if u have money Rs "<<money<<" in your bank account, you will recieve money Rs "<<moneyrecieved(money, 
    1.04)<<" after 1 year."<<endl;
    cout<<"for VIP: if u have money Rs "<<money<<" in your bank account, you will recieve money Rs "<<moneyrecieved(money, 1.10)<<" after 1 year."<<endl;
     
    return 0;
}