#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n;
    cin >> n;
    int m= 2;
    for(int m=2;m<n/2;){
        if(n%m==0){
            cout<<m<<" ";
            n=n/m;
        }
        else {
            m++;
        }
    }
    if(n!=0){
        cout<<n;
    }
    //write your code here

}