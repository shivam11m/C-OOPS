#include <iostream>
#include<bits/stdc++.h>
typedef long long int lp;
using namespace std;

class abst{
    private:
        int num,x;
    public:
        void setvalues(int p,int q){
            num=p;
            x=q;
            getdetails();
    // not calling this function in main class by hiding it from user.
    // To call this function by user -- pr.getdetails()
            
        }
        void getdetails(){
            cout<<"Number is "<<num<<endl;
            cout<<"Number is "<<x<<endl;
        }
};

int main()
{
   abst pr;
   pr.setvalues(20,30);
   return 0;
}
