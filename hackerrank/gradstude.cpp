#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int tmp, grads[n],arr[n];
    for(int i=0;i<n;i++){
        cin>>grads[i];
    }
    for(int i=0;i<n;i++){
        if(grads[i]>=38){
            if(grads[i] % 5 < 3){ 
                arr[i] = grads[i];
            }else{ 
                arr[i] = grads[i] + (5- grads[i] % 5);
            }
        }else{
            arr[i] = grads[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}