#include<bits/stdc++.h>
using namespace std;
bool pali(string s){
    if (s.empty()) return true;
    int left=0, right=s.size()-1;
    bool ans=true;
    while(left<right){
        while(left<right && !isalnum(s[left])) left++;
        while(left<right && !isalnum(s[right])) right--;
        if(tolower(s[left])==tolower(s[right])){
            ans = true;
        }
        else{
            ans = false;
            break;
        }
        left++;
        right--;
    }
    return ans;

}
int main(){
     string  s = "A man, a plan, a canal: Panama";
     pali(s);

    // int left=0, right=s.size()-1;
    // bool ans;
    // while(left<right){
    //     while(left<right && !isalnum(s[left])) left++;
    //     while(left<right && !isalnum(s[right])) right--;
    //     if(tolower(s[left])==tolower(s[right])){
    //         ans = true;
    //     }
    //     else{
    //         ans = false;
    //         break;
    //     }
    //     left++;
    //     right--;
    // }
    // cout<<ans;

    return 0;
}