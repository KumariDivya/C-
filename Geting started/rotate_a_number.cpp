#include <iostream>
#include<cmath>
using namespace std;

void countnum(int n,int k){
    int temp=0,num=n;
    while(num!=0){
        num=num/10;
        temp++;
    }
    k=k%temp;
    // cout<<k<<endl;
    if(k<0){
        k=temp+k;
    }
    int di=pow(10,k);
    int a=n%di;
    int b=n/di;
    int c=a*pow(10,temp-k)+b;
    cout<<c;
    return;
}

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    countnum(n,k);
    //write your code here

}