#include<iostream>
#include<vector>
using namespace std;

void find(vector<int> &arr,int num){
    int idx=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==num){
            idx=i;
            break;
        }
    }
    cout<<idx;
    return ;
}

int main(){
    //write your code here
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cin>>num;
    find(arr,num);
    return 0;
}