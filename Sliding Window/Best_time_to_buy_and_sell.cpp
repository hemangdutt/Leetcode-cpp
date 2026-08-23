#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={7,1,5,3,6,4,14};

    if(nums.empty())return 0;
    int profit=0,lowest;
    lowest=nums[0];
    for(int i=0;i<nums.size();i++){
        profit=max(profit,nums[i]-lowest);
        lowest=min(lowest,nums[i]);
    }
    cout<<profit;
    return 0;
}