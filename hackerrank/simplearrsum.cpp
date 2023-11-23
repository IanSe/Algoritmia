#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int n){
    if(n!=0) return arr[n] + solve(arr, n-1);
    else return arr[0];
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<solve(arr, n-1)<<endl;
}