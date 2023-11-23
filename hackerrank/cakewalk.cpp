#include <bits/stdc++.h>
using namespace std;

long long int solve(int n, vector<int>arr){
    int i=0;
    long long int max = 0;
    sort(arr.begin(), arr.end());
    n--;
    while(n>=0){
        max += pow(2,i)*arr[n];
        n--;
        i++;
    }
    return max;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr;
    int t;
    for(int i=0;i<n;i++){
        cin>>t;
        arr.push_back(t);
    }
    cout<<solve(n, arr)<<endl;
}