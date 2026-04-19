#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="cit";
    string t="tac";
    unordered_map<char,int> mpp;
    if(s.size()!=t.size()){
        cout<<"false";
    }
    else{
    for(auto i:s){
        mpp[i]++;
    }
    for(auto j:t){
        mpp[j]--;
    }
    for(auto i:mpp){
        if(i.second!=0){
            return false;
        }
    }
    return true;
    }

    return 0;
}