#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    if(s[8] == 'A'){
        if(s[0] == '1' && s[1] == '2') s[0] = s[1] = '0';            
    
        for(int i=0;i<s.length()-2;i++){
            cout<<s[i];
        }
        cout<<endl;
    }else{
        string tmp;
        if(s[0] == '1' && s[1] == '2') 1;
        else{
            s[0] += 1;
            s[1] += 2;
        }
        for(int i=0;i<s.length()-2;i++){
            cout<<s[i];
        }
        cout<<endl;
    }
}