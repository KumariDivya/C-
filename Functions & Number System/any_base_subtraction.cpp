#include<iostream>
using namespace std;

int getDifference(int b, int n1, int n2)
{
    int ans=0;
    int pow=1;
    int borrow=0;
    while(n2>0)
    {
        int d1=n1%10;
        int d2=n2%10;
        
        n1=n1/10;
        n2=n2/10;
        
        int sub=(d2+borrow)-d1;
        int d=sub;
        if(sub<0)
        {
            d+=b;
            borrow=-1;
        }
        else
        {
            borrow=0;
        }
        ans+=d*pow;
        pow*=10;
    }
    return ans;
    
}


int main(){
    int b, n1, n2;
    cin>>b>>n1>>n2;
   cout<< getDifference(b,n1,n2);
}