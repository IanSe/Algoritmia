#include<bits/stdc++.h>
using namespace std;

string convert(string s, int numRows) {
    int n = s.length();
    if(n<2 || numRows <2) return s;
    else if(n<=numRows) return s;
    else if(numRows == 2){
        string twoby, nonby;
        for(int i=0;i<n;i++){
            if(i % 2 == 0) twoby += s[i];
            else nonby += s[i];
        }
        return twoby+nonby;
    }else{
        int t = round(n/2)+1,h=0, c=1, b=0, st=1;
        vector<char>auxmat(t, char(0));
        vector<vector<char>>mat(numRows, auxmat);
        for(int i=0;i<n;i++){
            if(c){
                if(h==numRows){
                    h-=2;
                    c=0;
                    b++;
                    mat[h][b] = s[i];
                }else{
                    if(st==0) h++;
                    st++; 
                    mat[h][b] = s[i];
                    h++;
                }
            }else{
                if(h==0){
                    h++;
                    c=1;
                    st=0;
                    mat[h][b] = s[i];
                }else{
                    h--;
                    b++;
                    mat[h][b] = s[i];
                }
            }
        }
        string temporal;
        for(int i=0; i<numRows; i++){
            for(int j=0; j<t; j++){
                if(mat[i][j] != char(0)) temporal += mat[i][j];
            }
        }
        return temporal;
    }
    return "NULL";   
}

int main(){
    string s;
    int numrows;
    cin >> s;
    cin >> numrows;
    string t = convert(s, numrows);
    cout<<t;
}