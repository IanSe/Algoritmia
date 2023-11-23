#include<bits/stdc++.h>
using namespace std;

int isdescreasing(int n){
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(is_sorted(arr,arr+n))
        return 1;
    else{
        for(int i=1; i<n-1; i++){
            arr[i+1] -= arr[i];
            arr[i] = 0;
        }
        if(arr[n-1]>= 0)
            return 0; 
        else 
            return 1;
    }
}

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        isdescreasing(n) ? puts("YES") : puts("NO");
    }
}