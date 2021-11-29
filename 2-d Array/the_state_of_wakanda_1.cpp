#include<iostream>
#include<vector>

using namespace std;

void columnTraversal(vector<vector<int>> mat) {
//   Write your code here.
int n=mat.size();
int m=mat[0].size();
int j=0;
for(int i=0;i<m;i++){
    // if(j==0){
    //     int k=0;
    //     while(k<j){
    //         cout<<mat[k][i]<<endl;
    //         k++;
    //     }
    //     cout<<"sas";
    //     // j++;
    // }
    if(j%2==0){
        int k=0;
        while(k<n){
            cout<<mat[k][i]<<endl;
            k++;
        }
        j++;
    }else{
        int k=n-1;
        while(k>=0){
            cout<<mat[k][i]<<endl;
            k--;
        }
        j++;
    }
}
return;
}

int main() {
  int n;
  int m;
  cin >> n;
  cin >> m;

  vector<vector<int>> mat;
  for (int i = 0; i < n; i++) {
    vector<int> arr;
    for (int j = 0; j < m; j++) {
      int ele;
      cin >> ele;
      arr.push_back(ele);
    }
    mat.push_back(arr);
  }

  columnTraversal(mat);
}