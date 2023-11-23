#include<bits/stdc++.h>
using namespace std;

int main(){
    string chain="codeforces";
    int n, c;
    cin>>n;
    char p[n];
    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    for(int i=0; i<n; i++){
        c=0;
        for(int j=0; j<chain.length(); j++){
            if(chain[j]==p[i]){
                j=chain.length();
                cout<<"YES"<<endl;
                c=1;
            }
        }
        if(c==0)
            cout<<"NO"<<endl;
    }
}