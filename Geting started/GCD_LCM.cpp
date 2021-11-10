#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;
    int dividend=num1;
    int divisor=num2;
    while(dividend%divisor!=0)
    {
        int rem=dividend%divisor;
        dividend=divisor;
        divisor=rem;
    }
    cout<<divisor<<endl;
    int lcm=(num1*num2)/divisor;
    cout<<lcm;
}