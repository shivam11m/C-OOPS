#include <iostream>
#include<bits/stdc++.h>
typedef long long int lp;
using namespace std;

// FUNCTION OVERLOADING

class compiletime{
    public:
        void addnum(int num1, int num2){
            cout<<num1+num2<<"\n";
        }
        void addnum( int num1,int num2,int num3){
            cout<<num1+num2+num3<<"\n";
        }
};
int main(){
    compiletime obj;
    obj.addnum(1,2);
    obj.addnum(1,2,2);
    obj.add(1,2,2);
}
