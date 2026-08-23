#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="abbcc";

if(s.empty())return 0;
int maxlen=0,left=0,right=0;
unordered_set<char> seen={};
    for(right;right<s.size();right++){
        if(seen.count(s[right])==1){
            while(seen.find(s[right])!=seen.end()){
                seen.erase(s[left]);
                left++;
            }
        }

        seen.insert(s[right]);
        maxlen=max(maxlen,right-left+1);
    }
cout<<maxlen;  
    return 0;
}