#include<bits/stdc++.h>
using namespace std;

string convert(string s, int numRows) {
    int n = s.length();
    if(n<2) return s;
    if(n<=numRows) return s;
    else{
        int t = round(n/2),h=0, c=1, b=0;
        char mat[numRows][t];
        for(int i=0; i<numRows; i++){
            for(int j=0; j<t; j++){
                mat[i][j] = ' ';
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            if(c){
                if(h==numRows){
                    h-=2;
                    c=0;
                    b++;
                }else{
                    mat[h][b] = s[i];
                    h++;
                }
            }else{
                if(h==0){
                    mat[h][b] = s[i];
                    c=1;
                }else{
                    mat[h][b] = s[i];
                    h--;
                    b++;
                }
            }
        }
        for(int i=0; i<numRows; i++){
            for(int j=0; j<t; j++){
                cout<<mat[i][j]<<' ';
            }
            cout<<endl;
        }
    }
    return 0;   
}

int main(){
    string s;
    int numrows;
    cin >> s;
    cin >> numrows;
}