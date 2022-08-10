#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setcomplex(int n1,int n2){
          a=n1;
          b=n2;
    }
    // below line means that nonmember - sumcomplex function to allow to do anything with my private parts(members).
    friend complex sumcomplex(complex o1,complex o2);
    void printcomplex(){
         cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex sumcomplex(complex o1,complex o2){
    complex x;
    x.setcomplex((o1.a+o2.a),(o1.b+o2.b));
    return x;
}
int main(){
    complex c1,c2,sum;
    c1.setcomplex(3,4);
    c1.printcomplex();
    c2.setcomplex(5,3);
    c2.printcomplex();
    sum=sumcomplex(c1,c2);
     sum.printcomplex();
    return 0;
} 
 

// property of frnd function-->

// 1) not in scope of class 
// 2) since it is not in the scope of the class , it cannot called from the object of that class c1.sumcomplex()==invalid
// 3) can be invoked without the help of any is_object
// 4) usually contains the object as arguments
// 5) can be declared inside as public or private section of the class 
// 6) it cannot access the members directly by their names and need object_name.member_name to access any member
