#include<bits/stdc++.h>
using namespace std;

string clean(string s){
    string t;
    for(int i=0; i<s.length(); i++){
        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 &&  s[i]<= 122)) s[i] = tolower(s[i]);
        if(s[i]>=97 &&  s[i]<= 122){
            t += s[i];
        }
    }
    return t;
}

bool vp(string s){
    int l=0;
    int r = s.size()-1;
    while(l<=r){
        if(s[l]!=s[r])
            return false;
        l++;
        r--;
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    vp(clean(s)) ? puts("Yes") : puts("No");
}