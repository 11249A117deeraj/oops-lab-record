#include<iostream>
using namespace std;
class employeepayslip{
    private :
    int em_no,basicpay,da,hra,ban,net_pay,total,epf,gpay,prof_tax;
    string emp_name,in_tax,unan,ifsc_c;
    public :
    void getdetails(){
        cout<<"employee name :";
        cin>>emp_name;
        cout<<"income tax no :";
        cin>>income_tax_no;
        cout<<"universal acc no :";
        cin>>universal_acc_no ;
        cout<<"bank acc no :";
        cin>>bank_acc_no;
        cout<<"IFSC code :";
        cin>>IFSC_code ;
        cout<<"employee no :";
        cin>>employee_no;
        cout<<"pre days :";
        cin>>pre_days;
        cout<<"basic pay :";
        cin>>basic_pay;

    } 
    void cal(){
        DA=(basic_pay)*0.8;
        HRA=(basic_pay)*0.1;
        epf=(basic_pay)+DA*1.2;
        gpay=basic_pay+DA+HRA;
        prof_tax=(basic_pay)/100*2;
        total=epf+prof_tax;
        net_pay=gpay-total;

    }
    void dispaly(){
        cout<<"employee no :"<<em_no<<"\nemployee name :"<<emp_name<<"\nuniversal acc no:"<<una<<"\nifsc code :"<<ifsc_c<<endl;
        cout<<"\nbank acc no :"<<bank<<"\nbasic pay:"<<basicpay<<endl;
        cout<<"DA :"<<da<<"\nHRA :"<<hra<<"\nEPF :"<<epf<<"\nGRASS pay :"<<gpay<<"\nprof_tax:"<<prof_tax<<endl;
        cout<<"\ntotal dedication :"<<total<<"\nnet pay :"<<net_pay<<endl;

    } 
};
int main(){
    employeepayslip D;
    cout<<"***enter the details of employe***"<<endl;
    D.getdetails();
    D.cal();
    cout<<"***employee pay slip details***"<<endl;
    D.display();
    return 0;
}
