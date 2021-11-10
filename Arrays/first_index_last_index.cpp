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
    
    // write your code here
    int start=-1,final=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==data){
            start=i;
            while(arr[i]==data){
                final=i;
                i++;
            }
        }
    }
    cout<<start<<endl<<final;
}