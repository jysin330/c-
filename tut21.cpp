#include<iostream>
using namespace std;
class shop{
       int itemid[100];
       int itemprice[100];
       int counter;
       public:
       void initcounter(void){counter=0;}
       void setprice(void);
       void displayprice(void);
};
void shop:: setprice(){
    cout<<"enter id of your item no."<<counter+1<<" is ";
    cin>>itemid[counter];
    cout<<"enter price of your item no."<<counter+1<<" is ";
    cin>>itemprice[counter];
    counter++;
}
void shop:: displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
      cout<<"the price of item no."<<i+1<<" with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
    
}
int main(){
    shop dukkan;
    dukkan.initcounter();
     dukkan.setprice();
     dukkan.setprice();
     dukkan.setprice();
     dukkan.displayprice();

    return 0;
}