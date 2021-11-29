#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &arr, int lo,int hi ){
    while(lo < hi) {
            int temp = arr[lo];
            arr[lo] = arr[hi];
            arr[hi] = temp;
            
            lo++;
            hi--;
        }
}

void rotate (vector<int> &vec, int r){
    int n=vec.size();
    r=r%n;
    
    if(r<0){
        r=r+vec.size();
    }
    reverse(vec,0,n-1);
        reverse(vec,0,r-1);
        reverse(vec,r,n-1);
}

int main(){
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int s,r;
    cin>>s>>r;
    vector<int> vec;
    for(int i=s-1;i<=n-s;i++){
        int num=arr[i][s-1];
        vec.push_back(num);
    }
    for(int i=s;i<=m-s;i++){
        int num=arr[n-s][i];
        vec.push_back(num);
    }
    for(int i=n-s-1;i>=s-1;i--){
        int num=arr[i][m-s];
        vec.push_back(num);
    }
    for(int i=m-s-1;i>s-1;i--){
        int num=arr[s-1][i];
        vec.push_back(num);
    }
    
    rotate(vec,r);
    int j=0;
    for(int i=s-1;i<=n-s;i++){
        arr[i][s-1]=vec[j];
        j++;
    }
    for(int i=s;i<=m-s;i++){
        arr[n-s][i]=vec[j];
        j++;
    }
    for(int i=n-s-1;i>=s-1;i--){
        arr[i][m-s]=vec[j];
        j++;
    }
    for(int i=m-s-1;i>s-1;i--){
        arr[s-1][i]=vec[j];
        j++;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}