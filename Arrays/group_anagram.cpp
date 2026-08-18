#include<bits/stdc++.h>
using namespace std;

int main(){
    string strs[]={"tea","bat","eat","tan","ate","nat"};
    // seen={t:1,e:1,a:1}
    unordered_map <string,vector<string>> seen;
    int Size=sizeof(strs)/sizeof(strs[0]);
    for(int i=0;i<Size;i++){
        sort(strs[i].begin(),strs[i].end());
        for(auto j:strs[i]){
            seen[j]++;//add 1
        }
    }
    return 0;
}