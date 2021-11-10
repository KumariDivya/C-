#include<iostream>
#include<math.h>
using namespace std;
void dectobinary(int binary[],int i,int n)
{
    int j=n-1;
    while(i>=0)
    {
        if(i==1||i==0)
        {
            binary[j]=i;
            i=-1;
        }
        else
        {
            int d=i%2;
            i=i/2;
            binary[j]=d;
        }
        j--;
    }
    while(j>=0)
    {
        binary[j]=0;
        j--;
    }
}
void subset(int arr[],int n)
{
    int binary[n];
    int p=pow(2,n);
    for (int i = 0; i < p; i++) 
    {
        dectobinary(binary,i,n);
        for (int i = 0; i < n; i++)
        {
            if(binary[i]==0)
            {
                cout<<"-"<<"	";
            }
            if(binary[i]==1)
            {
                cout<<arr[i]<<"	";
            }
        }
        printf("
");
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    subset(arr,n);
}