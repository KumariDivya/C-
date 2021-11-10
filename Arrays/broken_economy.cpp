#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;
    
    int lo=0;
    int hi=n-1;
    int floor=-1;
    int ceil=-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==data){
            return mid;
        }else if(data<arr[mid]){
            hi=mid-1;
        
            floor=arr[mid];
        }else if(data>arr[mid]){
            lo=mid+1;
            ceil=arr[mid];
        }
    }
    cout<<floor<<endl<<ceil;
    // write your code here
    return 0;
}