#include<iostream>
using namespace std ;
class book {
    private :
    int acc no pages;
    char bookname[50],author[50],ISBN[50];
    float price ;
    public :
    void get details (){
        cout<<"enter book name :";
        cin>>book name;
        cout<<"enter author :";
        cin>>author;
        cout<<"enter ISBN NO:";
        cin>>ISBN;
        cout<<"enter pages :";
        cin>>pages ;
        cout<<"enter acc no :";
        cin>>acc no;
        cout<<"enter price :";
        cin>>price;
        void dispaly() {
            cout<<"book name :"<<bookname<<endl;
            cout<<"author :"<<author<<endl;
            cout<<"ISBN no :"<<ISBN<<endl;
            cout<<"pages :"<<pages<<endl;
            cout<<"acc no :"<<acc no<<endl;
            cout<<"price :"<<price<<endl;
        } int main(){
            int n ;
            cout<<"enter no of books:";
            cin>>n;
            book b[100];
            for(int i=0;i<n;i++)
            { cout<<"/n enter details for book"<<i+1<<" \n";
              b[i].get details();

        } cout<<"\n===(libary book details)==\n;
          for(int i=0;i<n;i++){
          cout<<"\n book"<<i+1<<":\n";
          for(int i=0;i<n;i++){
          cout<<"\n book"<<i+1<< :"\n";
          b[i].display();

    } return 0;
}