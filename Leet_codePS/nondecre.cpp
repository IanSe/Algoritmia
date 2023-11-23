#include<bits/stdc++.h>
using namespace std;

bool checkPossibility(vector<int>& nums) {
        int r, l, n=nums.size();
        for(int i=0;i<n;i++){
            cout<<nums[i]<<endl;
            if(i<n/2)
                r += nums[i];
            else
                l += nums[i];
        }
        cout<<r<<":"<<l<<endl;
        if(r>l)
            return false;
        else
            return true;
}

int main(){
    vector<int>arr = {4,2,1};
    checkPossibility(arr) ? puts("SI") : puts("NO");
}