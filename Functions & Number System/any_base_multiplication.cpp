#include<iostream>
using namespace std;

int anybaseaddition(int n1,int n2,int b)
{
    int pow=1;
    int ans=0;
    int carry=0;

    while(n1>0||n2>0||carry>0)
    {
        int d1=n1%10;
        int d2=n2%10;
        n1=n1/10;
        n2=n2/10;
        int sum=d1+d2+carry;
        int d=sum%b;
        carry=sum/b;
        ans+=d*pow;
        pow*=10;
}
return ans;
}

int anybasemulti(int d2,int n2,int b)
{
    int ans=0;
    int pow=1;
    int carry=0;
    while(n2>0||carry>0)
    {
        int d1=n2%10;
        n2=n2/10;
        int mult=d1*d2+carry;
        int d=mult%b;
        carry=mult/b;
        ans=ans+d*pow;
        pow*=10;
    }
    return ans;
}

int getProduct(int b, int n1, int n2)
{
    int res=0;
    int pow=1;
    while(n2>0)
    {
        int d2=n2%10;
        n2=n2/10;
        int ans=anybasemulti(d2,n1,b);
        res=anybaseaddition(res,ans*pow,b);
        pow*=10;
    }
    return res;
}


int main()
{
    int b, n1, n2;
    cin>>b>>n1>>n2;
    cout<<getProduct(b,n1,n2)<<endl;
}