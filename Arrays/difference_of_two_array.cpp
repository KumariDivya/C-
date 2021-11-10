#include<iostream>
#include<vector>
using namespace std;

vector<int> diff(vector<int> a,vector<int> b){
    int i=a.size();
    int j=b.size();
    int len=j;
    vector<int> ans(len,0);
    int carry=0;
    i-=1;
    j-=1;
    len-=1;
    while(j>=0){
        int n1=0,n2=0;
        if(i>=0){
            n1=a[i];
        }
        if(j>=0){
            n2=b[j];
        }
        if(n1>n2){
            n2=n2+10;
            int temp=b[j-1]-1;
            b[j-1]=temp;
        }
        int dif=n2-n1;
        ans[len]=dif;
        i--;
        j--;
        len--;
    }
    return ans;
}

int main() {
    int n1;
    cin>>n1;
    vector<int> arr1(n1,0);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    vector<int> arr2(n2,0);
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    vector<int> ans=diff(arr1,arr2);
    
    int start=0;
    while(ans[start]==0){
        start++;
    }
    
    for(int i=start;i<ans.size();i++){
        if(i==0 && ans[i]!=0){
            cout<<ans[i]<<endl;
        }else{
            cout<<ans[i]<<endl;
        }
    }
}