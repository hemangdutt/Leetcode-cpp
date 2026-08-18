#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={0,1,2,9,6,7,8};
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
        }
        else{

        }
        if(current>longest){
            longest=current;
        }
        current=0;
    }
    cout<<longest;
    return 0;
}