#include<iostream>
using namespace std;
int digFreq(int n, int d) {
  //write your code here
  int temp=0;
  while(n!=0){
    int num=n%10;
    if(num==d){
        temp++;
    }
    n=n/10;
  }
  return temp;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}