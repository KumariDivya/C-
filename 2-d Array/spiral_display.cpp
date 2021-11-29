#include <iostream>
using namespace std;

const int mr = 100, mc = 100;
void inputBound(int (&mat)[mr][mc], int n, int m)
{

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> mat[i][j];
    }
  }
}

int main(int argc, char** argv)
{


  int mat[mr][mc] = {0};
  int n, m;
  cin >> n >> m;
  int j=0;
  inputBound(mat, n, m);
  
  int rs=0,cs=0;
  int re=n-1,ce=m-1;
//   int ele=re*ce;
  int te=n*m;
  int count=0;
  while(count<te){
      for(int i=rs;i<=re && count < te;i++){
          cout<<mat[i][cs]<<endl;
          count++;
      }
      cs++;
      for(int i=cs;i<=ce && count < te;i++){
          cout<<mat[re][i]<<endl;
          count++;
      }
      re--;
      for(int i=re;i>=rs && count < te;i--){
          cout<<mat[i][ce]<<endl;
          count++;
      }
      ce--;
      for(int i=ce;i>=cs && count < te;i--){
          cout<<mat[rs][i]<<endl;
          count++;
      }
      rs++;
      
  }


  // write your code here

  return 0;
}