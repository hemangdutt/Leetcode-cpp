#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={1,8,6,2,5,4,8,3,7};
    int left=0, right=nums.size()-1,area, maxarea=0;
    while(left<right){
        area=min(nums[left],nums[right])*(right-left);
        maxarea=max(maxarea,area);
        if(nums[left]<nums[right]){
            left++;
        }
        else{
            right--;
        }
    }
    cout<<maxarea;
    return 0;
}