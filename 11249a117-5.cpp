#include<iostream>
using namespace std;
class EB
{ private :
    int current,units,customerid;
    float amount;
    char name[50];
    public:
    void get details();
    void campute bill();
    void print bill();
} ;
void EB::get data()
{ cout<<"enter custormerid";
  cin>>custormerid";
  cout<<"enter amount of units consumed";
  cin>>units;
  cout<<"enter customer name";
  void EB::compute()
  { if(unit<+100)
   amount=0;
   else if(units<=100)
   amount==(unit=100)*2.25;
   else if(units<=400)
   amount=(100*2.25)+(unoit-200)*4.25;
   else if(units<=600)
   amount=(100*2.25)+(200*4.25)+(unit_400)*600;
   else if(unit>600)
   amount=(100*2.25)+(200*4.45)+(200*6)+(unit*600)*9;
}
   void EB::print()
   { cout<<"--electricity bill--"<<endl;
    cout<<"custormerid"<<custormerid<<endl;
    cout<<"name"<<name;
    cout<<"units"<<units;
    cout<<"amount"<<amount;
} int main()
 {EB.E1;
  E.getdata();
  E1.compute bill();
  E1.print bill();
  
}

  