#include<bits/stdc++.h>
using namespace std;

int check(int n, int a[]
, int b[], int am, int bm){
    if(a[n-1] == b[n-1] && (a[n-1] < am || a[n-1] < bm))
        return 0;
    else if((a[n-1]>b[n-1] && a[n-1]<=bm)||(b[n-1]>a[n-1] && b[n-1]<=am))
        return 0;
    else 
        return 1;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int am=*max_element(a,a+n), bm= *max_element(b, b+n);
    check(n,a,b,am,bm) ? puts("YES") : puts("NO");
}