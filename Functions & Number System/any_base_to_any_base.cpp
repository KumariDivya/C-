#include<iostream>
#include<math.h>
using namespace std;

int anytodec(int n, int b){
    int num=0,pow=1;
    while(n!=0){
        int digit=n%10;
        n=n/10;
        num+=digit*pow;
        pow*=b;
    }
    // cout<<num;
    return num;
}

int dectoany(int n,int b){
    int num=0,po=1;
    while(n!=0){
        int digit=n%b;
        n=n/b;
        num+=digit*po;
        po*=10;
    }
    // cout<<num;
    return num;
}

int AnyToAny(int n, int b1, int b2) {
  //write your code here
  
  int num=anytodec(n,b1);
//   cout<<num;
  int ans=dectoany(num,b2);
  return ans;
}
int main() {
  int n;
  int b1;
  int b2;
  cin >> n;
  cin >> b1;
  cin >> b2;
  int res = AnyToAny(n, b1, b2);
  cout << res << endl;
}