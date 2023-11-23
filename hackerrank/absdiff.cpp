#include <bits/stdc++.h>
using namespace std;

int absdiff(vector<vector<int>>&mat, int n){
    int l=0, r=0;
    for(int i=0;i<n;i++){
        l += mat[i][i];
        r += mat[i][n-i-1];
    }
    int tmp = l-r;
    return abs(tmp);
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> mat;
    for(int i=0;i<n;i++){
        vector<int>vt;
        for(int j=0;j<n;j++){
            int t;
            cin>>t;
            vt.push_back(t);
        }
        mat.push_back(vt);
    }
    cout<<absdiff(mat, n)<<endl;
}