#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s;
    int del, swa;
    while(t--){
        cin>>s;
        swa = 0;
        del = 0;
        if(is_sorted(s.begin(), s.end()))
            swa = 0;
        else{
            char tem;
            int n = s.length();
            for(int i=0;i<n;i++){
                if((s[i]>s[i+1]&&s[i]<=s[i+2]&&s[i]!=s[i-1])||(i==n-2 && s[i]>s[i+1])){
                tem = s[i];
                s[i] = s[i+1];
                s[i+1] = tem;
                swa++;
                }
            }
            if(!is_sorted(s.begin(), s.end())){
                for(int i=0; i<n;i++){
                    if(i==0){
                        if((s[i]!=s[i+1])){
                            for(int j=i; j<n-1; j++){
                                s[j] = s[j+1];
                            }
                        del++;
                        i--;
                        n--;
                        }
                    }else{
                        if((s[i]!=s[i+1] && s[i]!=s[i-1])||(s[i]!=s[i] && s[i]!=s[i-2])){
                            for(int j=i; j<n-1; j++){
                                s[j] = s[j+1];
                            }
                            i--;
                            n--;
                            del++;
                        }else if(i==n-1)
                    }
                }
            }
        }
        if(del>0) swa+=del;
        if(swa!=0)
            cout<<swa<<"00000000000"<<del<<endl;
        else 
            cout<<"0"<<endl;
    }
}