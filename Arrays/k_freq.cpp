#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={1,1,1,2,2,2,2,3,3,3,3};
    int k=2;
    vector<pair<int,int>> vec;
    unordered_map<int,int> mpp;
    for(auto i:nums){
            mpp[i]++;
        }
    for(auto i:mpp){
        vec.push_back({i.first,i.second});
    }
    sort(vec.begin(),vec.end(),[](const pair<int,int>&a,const pair<int,int>&b){
        return a.second>b.second;
    });
    for(int i=0;i<k;i++){
        cout<<vec[i].first;
    }
    return 0;
}