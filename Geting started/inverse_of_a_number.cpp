#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

 int pv=1,inv=0;
 while(n>0)
 {
    int d=n%10;
    n=n/10;
    inv+=pv*pow(10,d-1);
    pv++;
 }
    cout<<inv;
}