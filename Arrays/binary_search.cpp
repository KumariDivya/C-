#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& ar, int key) {
  //Write your code here.
  int hi=ar.size();
  int lo=0;
  int mi=-1;
  while(lo<hi){
    int mid=(lo+hi)/2;
    if(ar[mid]==key){
        mi=mid;
        break;
    }
    if(key<ar[mid]){
        hi=mid-1;
    }else if(key>ar[mid]){
        lo=mid+1;
    }
  }
  return mi;
}

int main(int argc, char** argv) {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int key;
  cin >> key;
  cout << search(arr, key) << endl;
}