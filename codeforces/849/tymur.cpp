#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        string tm;
        while(s[0]!=s[s.length()-1] && s.length()>0){
            for(int i=0;i<s.length()-1;i++){ 
                tm[i] = s[i+1];
            }
            s = tm;
            cout<<s<<"-";
        }
        cout<<tm.length();
    }
}