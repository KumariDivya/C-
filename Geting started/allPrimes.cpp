#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;

    //write your code here
    for(int i=low;i<=high;i++){
        int m=0;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                m++;
                break;
            }
        }
        if(m==0){
            cout<<i<<endl;
        }
    }

}