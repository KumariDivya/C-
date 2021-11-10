#include<iostream>
using namespace std;


int main(){
    int n=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int h=max;h>=1;h--)
    {
        for(int i=0;i<n;i++)
        {
        if(arr[i]>=h)
        {
            cout<<"*	";
        }
        else
        {
            cout<<"	";
        }
        }
        cout<<endl;
    }
}