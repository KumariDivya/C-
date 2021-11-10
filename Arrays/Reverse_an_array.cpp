#include<iostream>
using namespace std;

void reverse(int* arr, int n){
    // write your code here
    int i=0;
    n-=1;
    while(i<n){
        int temp=arr[i];
        arr[i]=arr[n];
        arr[n]=temp;
        i++;
        n--;
    }
    
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    display(arr,n);
}