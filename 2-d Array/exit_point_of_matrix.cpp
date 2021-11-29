#include <iostream>
using namespace std;


const int mr = 100, mc = 100;

int** input(int** mat, int n, int m)
{
  mat = new int* [n];
  for (int i = 0; i < n; i++)
  {
    int* arr = new int[m];
    for (int j = 0; j < m; j++)
    {
      cin >> arr[j];
    }
    mat[i] = arr;
  }
  return mat;
}


int main(int argc, char** argv)
{
  int n, m;
  cin >> n >> m;
  int** mat = input(mat, n, m);

  // write your code here
  //dir -> 0(east) , dir -> 1(south), dir -> 2(west), dir -> 3(north)
  int r=0,c=0;
  int dir=0;
  while(r>=0 &&r<n && c>=0 && c<m){
      
      dir=(mat[r][c]+dir)%4;
      if(dir==0){
          c++;
          
          if(c==m){
              c--;
              break;
          }
      }
      else if( dir==1){
          r++;
          if(r==n){
              r--;
              break;
          }
      }
      else if( dir==2){
          c--;
          if(c==-1){
              c++;
              break;
          }
      }
      else{
          r--;
          if(r==-1){
              r++;
              break;
          }
      }
    //   cout<<r<<c<<endl;
  }
//   cout<<"dd";
  cout<<r<<endl<<c;
  return 0;
}