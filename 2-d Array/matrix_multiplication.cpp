#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n = 0, m = 0;
  cin >> n >> m;
  vector<vector<int>> arr;
  for (int i = 0; i < n; i++) {
    vector<int> temp;
    for (int j = 0; j < m; j++) {
      int n = 0;
      cin >> n;
      temp.push_back(n);
    }
    arr.push_back(temp);
  }

  int n1 = 0, m1 = 0;
  cin >> n1 >> m1;
  vector<vector<int>> ar;
  for (int i = 0; i < n1; i++) {
    vector<int> temp;
    for (int j = 0; j < m1; j++) {
      int n = 0;
      cin >> n;
      temp.push_back(n);
    }
    ar.push_back(temp);
  }
  if (m != n1) {
    cout << "Invalid input";
    return 0;
  }
  vector<vector<int>> ans;
  for (int i = 0; i < n; i++) {
    vector<int> temp;
    for (int j = 0; j < m1; j++) {
      int res = 0;
      for (int k = 0; k < m; k++) {
        res += arr[i][k] * ar[k][j];
      }
      temp.push_back(res);
    }
    ans.push_back(temp);
  }
  for(int i=0;i<ans.size();i++){
      for(int j=0;j<ans[0].size();j++){
          cout<<ans[i][j]<<" ";
      }
      cout<<endl;
  }

}