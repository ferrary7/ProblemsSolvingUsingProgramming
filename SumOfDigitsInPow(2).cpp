#include <bits/stdc++.h>
using namespace std;

int operation(int n, int power){
    int sum = 0;
    int a = (int)pow(n,power);
    while (a!=0){
        int b= a%10;
        sum += b;
        a /= 10;
    }
    return sum;
}
int main() {
    int n=2;
    int power;
    cin>> power;
    if(power<=0){
        cout<<-1;
    }
    else{
    cout<< operation(n, power);
    }
    return 0;
}
