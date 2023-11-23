#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(), c=0;
        unordered_map<int, int> hash;
        for(int i=0;i<n;i++){
            if(hash.count(nums[i]))
                return {i,hash[nums[i]]};
            else
                hash[target-nums[i]] = i;
        }
}

int main(){
}