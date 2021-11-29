#include <iostream>
#include <vector>
using namespace std;

void upperDiagonal_traverse(int n, vector<vector<int>>& arr)
{
  // write your code here
  int count=0;
  for(int i=0;i<n;i++){
      for(int j=i, k=0;k<n-i;j++,k++){
          cout<<arr[k][j]<<endl;
      }
      count++;
  }
}

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> arr(n, vector<int>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> arr[i][j];

  upperDiagonal_traverse(n, arr);
}