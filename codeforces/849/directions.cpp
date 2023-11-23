#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t; 
    string s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        int pos[2] = {0,0}, c=0;;
        for(int i=0; i<n; i++){
            switch(s[i]){
            case 'L':
                pos[1] -= 1;
            break;
            case 'R':
                pos[1] += 1;
            break;
            case 'U':
                pos[0] += 1;
            break;
            case 'D':
                pos[0] -= 1;
            break;
            default:
                break;
            }
            if(pos[0] == 1 && pos[1] == 1){
                c=1;
            }
        }
        c ? puts("YES") : puts("NO");
    }
}
