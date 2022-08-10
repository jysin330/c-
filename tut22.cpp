#include<iostream>
using namespace std;
class employee{
    int id;
    static int count;
    // static int count=100;  ---> syntex error
    public:
    void setdata(void){
        cout<<"enter the employee id ";
        cin>>id;
        count++;
    }
    void getdata(void){
       
        cout<<"the id of this employee is "<<id<<" and this is employee no. "<<count<<endl;
       
    }
    static void getcount(void){
        // cout<<id; --->trows an error bcoz static function can access only static variables and functions
        cout<<"the value of count is "<<count<<endl;
    }
};
//count is the static data member of class employee
int employee:: count; //default value is 0
int main(){
    employee jyoti,khushboo, sakshi;
    jyoti.setdata();
    jyoti.getdata();
    employee::getcount();

    sakshi.setdata();
    sakshi.getdata();
    employee::getcount();
    
    khushboo.setdata();
    khushboo.getdata();
    employee::getcount();
return 0;
}
;