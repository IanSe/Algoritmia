#include<bits/stdc++.h>
using namespace std;

int main(){
    int d, r=0, s=0;
    cin>>d;
    int g[d];
    for(int i=0;i<d;i++){
        cin>>g[i];
    }
    for(int i=0;i<d;i++){
        if(i>0){
            if(g[i]>=g[i-1]){
                r++;
                if(r>s)
                    s = r;
            }else if(g[i]<g[i-1]){
                r=1;
            }
        }else
            r=s=1;
    }
    cout<<s;
}