#include<bits/stdc++.h>
using namespace std; 
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string ref=strs[0];
    string ans;
    for(auto i:strs){
        int Size=i.size();
        ans="";
        for(int j=0;j<Size;j++){
            if(ref[j]==i[j]){
               ans+=i[j];
            }
            else{
                break;
            }
        }
        ref=ans;
    }
     return ans;
    }
       
};