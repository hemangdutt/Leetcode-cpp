#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int left=0,right=height.size()-1;
    int leftmax=height[left],rightmax=height[right];
    int water=0;
    while(left<right){
        if(leftmax<rightmax){
            left++;
            leftmax=max(leftmax,height[left]);
            water+=leftmax-height[left];
        }
        else{
            right--;
            rightmax=max(rightmax,height[right]);
            water+=rightmax-height[right];
        }
    }
    cout<<water;
    return 0;
}