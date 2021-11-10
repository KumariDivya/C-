#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n,c;
    cin >> n;
    int a=0,b=1;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
    }
    
}