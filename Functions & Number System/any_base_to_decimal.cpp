#include<iostream>
using namespace std;
int AnyToDec(int n, int b) {
    int pow=1,num=0;
    while(n!=0){
        int digit=n%10;
        n=n/10;
        num+=digit*pow;
        pow*=b;
    }
    return num;
//write your code here.
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}