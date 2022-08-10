#include<iostream>
using namespace std;
int factorial(int x){
    if(x==1 || x==0 ){
        return 1;
    }
     return x*factorial(x-1);
}
int main(){
    int a=5;
    int y=factorial(a);
    cout<<"the factorial = "<<y;
    return 0;
}



