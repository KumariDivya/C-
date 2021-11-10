#include <iostream>
using namespace std;

void printnum(int n){
    if(n==0){
        return;
    }
    int a=n%10;
    n=n/10;
    printnum(n);
    cout<<a<<endl;
    return;
    
}

int main(int argc, char **argv){
    int n;
    cin >> n;
     printnum(n);
    //write your code here
    
}