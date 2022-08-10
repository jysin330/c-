    // oops--> classes and objects
    // c++ initially called c with classes by stroustrap
    // class --> extension of structures(in c)
    // structures had limitations
    //       - members are public
    //       - no methods
    // classes --> structures + more
    // classes --> can have methods and properties
    // classes --> can make few members as private & few as public
    // structures in c++ are typedefed
    // you can declare object along with class declaration like this
    //    class employee{
    //       // class definition
    //    }rohan,shyam,ramesh;
    //  jyoti.salary=8 -->makes no sense if salary is private
    
#include<iostream>
#include<string>
using namespace std;
class binary{
    string s;
     void chk_bin(void);
    public :
    void read(void);
    // void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};
void binary :: read(){
    cout<<"enter the binary number : ";
    cin>>s;
}
void binary :: chk_bin(){
  
    for (int i = 0; i < s.length(); i++)
    {
       if(s.at(i)!='0' && s.at(i)!='1'){
           cout<<"incorrect binary format "<<endl;
           exit(0);
       }
    }
    
}
void binary :: ones_compliment(){
    // chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
       if(s.at(i)=='0'  ){
           s.at(i)='1';
       }
       else{
           s.at(i)='0';
       }
    }
    
}
void binary :: display(){
       cout<<"displaing ones compliment binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
      cout<<s.at(i);
    }
    
}
int main(){
    binary b;
    b.read();
    // b.chk_bin();
    b.ones_compliment();
    b.display();
    return 0;
}