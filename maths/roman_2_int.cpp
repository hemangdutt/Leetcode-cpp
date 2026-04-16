#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> rom={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int output=0;
            int Size=s.size();
             for(int i=0;i<Size;i++){
                auto it=rom.find(s[i]);
                if(it!=rom.end()){
                    if(i<Size && rom[s[i]]<rom[s[i+1]]){
                        output=output-it->second;
                        }
                        else{
                            output=output+it->second;
            }
    }
    }
    return output;
    }
};