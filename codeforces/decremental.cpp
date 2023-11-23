#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, cont, status=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    for(int i=0;i<n;i++){
        if(i>0){
            if(arr[i]>=arr[i-1])
                status = 0;
            else{
                cont++;
                status = 1;
                    if(cont<=2)
                        status = 0;
            }
        }
    }
    if(status==0)
        puts("YES");
    else
        puts("NO");
}