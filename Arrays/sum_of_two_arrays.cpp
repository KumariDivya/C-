#include<iostream>
#include<vector>

using namespace std;

vector<int> sum(vector<int> a,vector<int> b){
    int n=a.size();
    int m=b.size();
    int len=n>m?n+1:m+1;
    vector<int> ans(len,0);
    int k=len-1;
    m-=1;
    n-=1;
    int carry=0;
    while(k>0){
        int sum=0;
        if(n>=0){
            sum+=a[n];
        }
        if(m>=0){
            sum+=b[m];
        }
        sum+=carry;
        int val=sum%10;
        ans[k]=val;
        carry=sum/10;
        n--;
        m--;
        k--;
    }
    return ans;
}

int main(){
    int n1,n2;
    cin>>n1;
    vector<int> arr1(n1,0);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cin>>n2;
    vector<int> arr2(n2,0);
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    vector<int> ans=sum(arr1,arr2);
    for(int i=0;i<ans.size();i++){
        if(i==0 && ans[0]!=0){
            cout<<ans[0]<<endl;
        }else if(i>0){
            cout<<ans[i]<<endl;
        }
    }
    return 0;
}