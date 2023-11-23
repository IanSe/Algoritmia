#include<bits/stdc++.h>
using namespace std;

int solve(int s, int t, int arry[], int siz, int coor){
    int cnt=0;
    for(int i=0;i<siz;i++){
        int tmp = coor+arry[i];
        if(tmp >= s && tmp <=t) cnt++;
    }
    return cnt;
}

int main(){
    int s,t,a,b, as,bs;
    cin>>s>>t;
    cin>>a>>b;
    cin>>as>>bs;
    int apples[as], oranges[bs];
    for(int i=0;i<as;i++){
        cin>>apples[i];
    }
    for(int i=0;i<bs;i++){
        cin>>oranges[i];
    }
    cout<<solve(s,t,apples,as,a)<<endl;
    cout<<solve(s,t,oranges,bs,b)<<endl;
}