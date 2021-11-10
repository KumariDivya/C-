#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void difference(vector<int> &arr){
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max)max=arr[i];
        if(arr[i]<min)min=arr[i];
    }
    int diff=max-min;
    cout<<diff;
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
    
    difference(arr);
    return 0;
}