#include <iostream>
using namespace std;

int maximum(int a,int b,int c){
    int max=0;
    if(a>b){
        max=a;
    }else{
        max=b;
    }
    if(c>max){
        max=c;
    }else{
        max=max;
    }
    return max;
}

int main(int argc, char **argv){
    int a,b,c;
    cin >> a >> b >> c;
    int sq=0;
     int max= maximum(a,b,c);
     if(a!=max)sq=a*a;
     if(b!=max)sq+=b*b;
     if(c!=max)sq+=c*c;
    
     if(max*max==sq){
         cout<<"true";
     }
     else cout<<"false";
    //write your code here
    
}