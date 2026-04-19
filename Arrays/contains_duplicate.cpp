#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={1,2,3,1};
    unordered_set<int> set={};
    int Size=nums.size();
    for(int i=0;i<Size;i++){
        if(set.count(nums[i])){
            return true;
        }
        else{
            set.insert(nums[i]);
        }
    }
    return false;
    return 0;
}