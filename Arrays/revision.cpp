#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={-1,0,1,2,-1,-4};
    sort(nums.begin(),nums.end());
    int left,right,target,sum;
    vector<vector<int>> result={};
    for(int i=0;i<nums.size()-2;i++){
        if(i!=0 && nums[i]==nums[i-1]) continue;
        right=nums.size()-1;
        target=-nums[i];
        left=i+1;
        while(left<right){
            sum=nums[left]+nums[right];
            if(sum==target){
                result.push_back({nums[i],nums[left],nums[right]});
                left++;
                right--;
                while(left<right && nums[left]==nums[left-1])left++;
                while(left<right && nums[right]==nums[right+1])right--;
            }
            else if(sum<target)left++;
            else right--;
            
        }
    }
    return result;
    return 0;
}