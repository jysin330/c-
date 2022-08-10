#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public:
    void setid(void){
        salary=10000;
        cout<<"enter the id number ";
        cin>>id;
    }
    void getid(void){
         cout<<"the employee id is "<<id<<endl;
    }
};
int main(){
    employee emp[4];
    for(int i=0;i<4;i++)
    {
        emp[i].setid();
        emp[i].getid();
    }
    return 0;
}