#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,ml,l,r,g,x,y, shots;
    cin>>n>>k>>ml>>l>>r>>g>>x>>y;
    int mlto = k*ml;
    int probbeb = mlto/x;
    int rod = l*r;
    int gto = g/y;
    shots = min(gto,min(rod,probbeb))/n;
    cout<<shots;
}