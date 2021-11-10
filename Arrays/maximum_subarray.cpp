#include <limits.h>
#include<iostream>
 #include<vector>
 using namespace std;
 
 // This is a functional problem. You have to complete this function.
 // It takes as input an integer array. It should return the required sum.
 int maxSum(vector<int> &arr) 
 {
     // write your code here.
     int n=arr.size();
     int sum=0;
     int q=-INT_MIN;
     for (int i = 0; i < n; i++) 
     {
        for (int j=i; j<n;j++) 
        {
            sum =0;
            for(int k=i;k<=j;k++)
            {
                sum=sum+arr[k];
            }
        if(sum>q)
        {
            q=sum;
        }
        }
     }
     return q;
 }
 
 int main(int argc, char** argv){
     int n;
     cin>>n;
     vector<int> A(n);
     for (int i = 0; i < n; i++)
         cin>>A[i];
 	 cout<<maxSum(A)<<endl;	 	 
 }