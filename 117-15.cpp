#include <iostream>
#include <conio.h>
using namespace std;
class student {
    private:
        int feet;
        int inch;
    public:
        student(){
            feet=0;
            inch=0;

       } 
       void getheight(int f,int i) 
       {
        feet=f;
        inch=i;

       }
       int operator > (student S3)
       {
        if(feet>S3.feet)
        return 1;
        else if(feet==S3.feet && inch>S3.inch)
        return 0;
        else
        return 0;

       }  
};
int main()
{
    student S1,S2;
    S1.getheight(5,10);
    S2.getheight(6,1);
    if(S1>S2)
    {
        cout<<"student S1 is taller";
    }
    else if(S2>S1)
    {
        cout<<"student S2 is taller";
    }
    else
    {
        cout<<"both are equal height";
    }
}