#include<iostream>
using namespace std;
class complex{
  int a;
  int b;
  public:
  void setdata(int v1,int v2){
      a=v1;
      b=v2;
  }
  void setdatabysum(complex x1,complex x2){
      a=x1.a+x2.a;
      b=x1.b+ x2.b;
  }
  void print(void){ 
     cout<<"your complex no is "<<a <<"+" <<b<<"i"<<endl;
  }
};
int main(){
    complex c1,c2,c3;
    c1.setdata(2,3);
    c1.print();
    c2.setdata(4,5);
    c2.print();
    c3.setdatabysum(c1,c2);
    c3.print();
    
    return 0;
}