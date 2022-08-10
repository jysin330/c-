#include<iostream>

using namespace std;
int sum(int a, int b){
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}
int sum(int a, int b, int c){
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
}
float volume(float pie ,int r, int h){
       return pie*r*r*h;
}
float volume(int a){
       return a*a*a;
}
int main(){
    cout<<"the sum of 3 and 4 is "<<sum(3,4)<<endl;
    cout<<"the sum of 3 , 4 and 7 is "<<sum(3,4,7)<<endl;
    cout<<"the volume of cylinder "<<volume(3.14, 4, 6)<<endl;
    cout<<"the volume of cube "<<volume( 4)<<endl;
   
    return 0;
}