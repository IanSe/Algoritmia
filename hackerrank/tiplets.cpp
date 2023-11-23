#include <bits/stdc++.h>
using namespace std;

vector<int> res(vector<int>&a, vector<int>&b){
    vector<int>tmp;
    tmp.push_back(0);
    tmp.push_back(0);
    for(int i=0;i<3;i++){
        if(a[i]>b[i]) tmp[0]++;
        if(a[i]<b[i]) tmp[1]++;
    }
    return tmp;
}

int main(){
    vector<int>a(3), b(3);
    for(int i=0;i<3;i++) cin>>a[i];
    for(int i=0;i<3;i++) cin>>b[i];
    vector<int>rep;
    rep = res(a,b);
    cout<<rep[0]<<" "<<rep[1]<<endl;
}
