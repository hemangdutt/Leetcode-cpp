#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={100,102,104,103,8,9,2,101};
    unordered_set<int> hashset(nums.begin(),nums.end());
    int longest=0,current,k;
    for(int i:hashset){
        if(hashset.find(i-1)==hashset.end()){
            current=1;
            k=i;
            while(hashset.find(k+1)!=hashset.end()){
                current++;
                k++;
            }
            longest=max(longest,current);
            current=0;
        }
    }
    cout<<longest;
    return 0;
}