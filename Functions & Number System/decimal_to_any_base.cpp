#include<iostream>
#include<math.h>
using namespace std;
int DecToAny(int n, int b) {
//write your code here
int num=0,po=0;
while(n!=0){
    int digit=n%b;
    n=n/b;
    num+=digit*pow(10,po);
    po++;
}
return num;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
}