#include <iostream>
using namespace std;

// yello=100

void digitcount(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<count;
    return;
}

int main(int argc, char **argv){
    int n;
    cin >> n;
    digitcount(n);
    //write your code here
    
}