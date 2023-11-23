#include<bits/stdc++.h>
using namespace std;

bool checkStraightLine(vector<vector<int>>& coordinates) {
    int n = coordinates.size();
    double m = (coordinates[1][1]-coordinates[0][1]) / (coordinates[1][0] - coordinates[0][0]);
    double tmp;
    for(int i=2;i<n;i++){
        tmp = (coordinates[i][1]-coordinates[i-1][1]) / (coordinates[i][0] - coordinates[i-1][0]);
        cout<<tmp;
        if(tmp != m) return false;
    }
    return true;
}

int main(){
    vector<vector<int>> coordiantes;
    for(int i=0;i<6;i++){
        vector<int>tmp;
        for(int j=0;j<2;j++){
            int t=i+j+1;
            tmp.push_back(t);
        }
        coordiantes.push_back(tmp);
    }
    checkStraightLine(coordiantes) ? puts("O") : puts("A");
}