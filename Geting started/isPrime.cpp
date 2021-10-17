#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int num;
        cin>>num;
        int m=0;
        for(int j=2;j<=num/2;j++){
            if(num%j==0){
                m++;
                break;
            }
        }
        if(m>0){
            cout<<"not prime"<<endl;
        }else{
            cout<<"prime"<<endl;
        }
    }
    
}