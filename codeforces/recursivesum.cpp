#include<bits/stdc++.h>
using namespace std;

int superDigit(string n, int k){
    char s = n[k-1];
    if(k!=0)
        return ((int)s-48) + superDigit(n, k-1);
    else 
        return 0;
}

int main(){
    string n;
    int k, r;
    cin>>n>>k;
    r=superDigit(n,k);
    cout<<r;
}