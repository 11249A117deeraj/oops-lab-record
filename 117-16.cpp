#include <iostream>
#include <cstring>  
using namespace std;

const int sz = 90;

class string1 {
    char str1[sz];

public:
  
    string1() {
        str1[0] = '\0'; 
    }

    
    string1(const char s[]) {
        strncpy(str1, s, sz - 1);  
        str1[sz - 1] = '\0';
    }

   
    void display() const {
        cout << str1 << "\n";
    }

   
    string1 operator+(const string1 &ss) const {
        string1 temp;

        if (strlen(str1) + strlen(ss.str1) < sz) {
            strcpy(temp.str1, str1);
            strcat(temp.str1, ss.str1);
        } else {
            cout << "String overflow!\n";
            strncpy(temp.str1, str1, sz - 1);
            temp.str1[sz - 1] = '\0';
        }

        return temp;
    }
};

int main() {
    string1 s1("hello ");
    string1 s2("world");
    string1 s3;

    s3 = s1 + s2;

    s1.display();
    s2.display();
    s3.display();

    return 0;
}