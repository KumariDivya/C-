#include <iostream>
using namespace std;

void printnum(int n){
    if(n==0){
        return;
    }
    int a=n%10;
    cout<<a<<endl;
    printnum(n/10);
}

int main(int argc, char **argv){
    int n;
    cin >> n;
    printnum(n);
    //write your code here
    
}