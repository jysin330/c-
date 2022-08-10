#include<iostream>
using namespace std;
// typedef struct employee
// {
//     int eid; // 4byte
//     char name; //1byte
//     float salary; //4byte 
//memory use by struct be ---> 4+1+4 byte
// }ep;

// struct employee
// {
//     int eid;
//     char name;
//     float salary;
// };

union money
{
    int rice; // 4byte
    char car; //1byte
    float pound; //4byte 
     //for better memory we use union---> use only four byte
};
// typedef union money
// {
//     int rice; // 4byte
//     char car; //1byte
//     float pound; //4byte 
//      //for better memory we use union---> use only four byte
// }mn;



int main(){
    //  enum meal{breakfast, lunch, dinner};
    //  meal m1= breakfast;
    //  cout<<m1<<"\n";
    //  cout<<(m1==1);
    //  cout<<breakfast<<endl;
    //  cout<<lunch<<endl;
    //  cout<<dinner<<endl;

       union money m1;
      m1.rice=34;
      m1.car='c';
      cout<<m1.car<<endl;
      cout<<m1.rice<<endl;
    //  mn m1;
    //   m1.rice=34;
    //   m1.car='c';
    //   cout<<m1.car<<endl;
    //   cout<<m1.rice<<endl;


    //  struct employee jyoti ;
    //  ep jyoti; // we can use ep in place of struct employee when we use typedef syntax
    //  jyoti.eid= 56;
    //  jyoti.name= 'j';
    //  jyoti.salary= 28000;
    //  cout<<jyoti.eid<<endl;
    //  cout<<jyoti.name<<endl;
    //  cout<<jyoti.salary<<endl;
    return 0;
}