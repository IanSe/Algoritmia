#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0], sum = 1;
    for(int i=1;i<n;i++){
        if(max == arr[i]) sum++;
        else if(arr[i]>max){
            max = arr[i];
            sum = 1;
        }
    }
    cout<<sum<<endl;
}