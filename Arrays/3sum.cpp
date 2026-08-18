#include<bits/stdc++.h>
using namespace std;

int main(){
    // must sum upto 0
    // i != j, i != k, and j != k
    vector<int> nums={-1,0,1,2,-1,-4};
    sort(nums.begin(),nums.end());//{-4,-1,-1,0,1,2}
    int i,j,k;
    int target;
    int left, right,sum;
    for(i=0;i<nums.size()-2;i++){
        target=-nums[i], left=i+1;right=nums.size()-1;
        if(i!=0&&nums[i]==nums[i-1]){
            continue;
        }
        else{
            while(left<right){
                sum=nums[left]+nums[right];
                if(sum==target){
                    cout<<nums[left]<<endl<<nums[right]<<endl<<nums[i];
                    int leftval=nums[left],rightval=nums[right];
                    left++,right--;
                    while(left<right && nums[left]==leftval){
                        left++;
                    }
                    while(left<right && nums[right]==rightval){
                        right--;
                    }
                }
                
                else if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
    }
    return 0;
}