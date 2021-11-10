#include<iostream>
#include<vector>
using namespace std;

void rotatearr(vector<int>& arr, int start, int end) {
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

//This is a functional problem, complete this function only.
void rotate(vector<int>& a, int k) {
  // Write your code here
  rotatearr(a, 0, a.size() - 1);
  rotatearr(a,0,k-1);
  rotatearr(a,k,a.size()-1);

}

// Don't make any changes here
int main(int argc, char** argv) {
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  rotate(arr, k);
  for (int v : arr)
    cout << v << " ";
}