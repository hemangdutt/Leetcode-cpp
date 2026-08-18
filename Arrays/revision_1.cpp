#include<bits/stdc++.h>
using namespace std;

int main(){
    // return +1 index
    // array is sorted so two pointers
    vector<int> nums={2,7,11,15};
    int target = 9;
    int left=0;
    int right= nums.size()-1;
    int sum;
    while(left<right){
        sum=nums[left]+nums[right];
        if(sum==target){
            cout<<left+1<<" & "<<right+1;
            break;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }

    return 0;
}