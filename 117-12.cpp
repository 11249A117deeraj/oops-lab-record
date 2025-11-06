#include<iostream>
using namespace std;

class Complex1 
{ int a,b,c;
 public:
Complex1(){}
void getvalue()
{
    cout<<"enter the two numbers :";
    cin>>a>>b;

}
void operator ++()
{
    a= ++a;
    b= ++b;

}
void operator --()
{
    a= --a;
    b= --b;
}
void dispaly()
{
    cout<<a<<"+\t"<<b<<"i"<<endl;
}
};
int main()
{ 
Complex1 obj;
obj.getvalue();
++obj;
cout<<"increment Complex number \n";
obj.dispaly();
--obj;
cout<<"decrement Complex number \n";
obj.dispaly();
return 0;

}