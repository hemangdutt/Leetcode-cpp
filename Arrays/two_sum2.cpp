#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={100,4,200,1,3,2};
    int longest=0;
    int start,current;
    unordered_set<int> hi(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(hi.find(nums[i]-1)==hi.end()){
            current=1;
            start=nums[i];
            while(hi.find(start + 1) != hi.end()){
            start++;
            current++;
        }
        if(current>longest){
            longest=current;
        }
        current=0;
    }
}
    cout<<longest;
        return 0;
}