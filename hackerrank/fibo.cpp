#include<bits/stdc++.h>
using namespace std;

long long int fib(int n, vector<long> &dp){
    if(n<2) return n; 
    if(n==2) return 1;
    if(dp[n] != -1) return dp[n];
    dp[n] = fib(n-1, dp) + fib(n-2, dp);
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    vector<long> tabla(n, -1);
    cout<<fib(n, tabla)<<endl;
}