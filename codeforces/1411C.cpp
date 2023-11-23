#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n; 
    int s[n];
    for(int i=0;i<n;i++)
        cin >> s[i];
    int m, d;
    cin>>d>>m;
    int suma=0, rsp=0;
    for(int i=0;i<m;i++)
        suma += s[i];
    if(suma == d) rsp++; 
    for(int i=m;i<n;i++){
        suma -= s[i-m];
        suma += s[i];
        cout<<suma<<endl;
        if(suma == d) rsp++;
    }
    cout<<rsp<<endl;
}