#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, u,d,tr,c,t=0;
    cin>>n;
    int g[n];
    for(int i=0;i<n;i++)
        cin>>g[i];
    for(int i=0;i<n;i++){
        switch(g[i]){
            case 4:
                c++;
                t++;
            break;
            case 3:
                tr++;
            break;
            case 2:
                d++;
            break;
            case 1:
                u++;
            break;
        }
    }
    if(u>=1 && tr>=1){
        if(u-tr == 0){
            t += u;
        }else if(u-tr == 1){
            t += tr + 1;
        }else if(u-tr > 1){
            t += tr + (u-tr);
        }else if(tr-u == 1){
            t += u + 1;
        }else if(tr-u > 1){
            t += u + (tr-u);
        }
    }
    if(d==1){
        t += 1;
    }else if(d % 2 == 0){
        t += d/2;
    }else if(d-1 % 2 == 0){
        t += (d-1/2) + 1;
    }
    cout<<t;
}
