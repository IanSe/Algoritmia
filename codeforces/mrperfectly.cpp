#include<bits/stdc++.h>
using namespace std;

int minutes(int n){
    string s[n]; 
    int m[n],n1=0,n2=0;
    for(int i=0;i<n;i++){
        cin>>m[i];
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        if(s[i][0]==s[i][1]=='1') return m[i];
        if(s[i][0]=='1' && (m[i]<n1 || n1==0)) n1=m[i];
        if(s[i][1]=='1' && (m[i]<n2 || n2==0)) n1=m[i];
    }
    if(n1==0==n2) return -1;
    else return n1+n2;
}

int main(){
    int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++){
        cin>>n;
        cout<<minutes(n)<<endl;
    }
}