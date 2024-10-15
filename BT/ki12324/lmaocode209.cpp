#include<bits/stdc++.h>
using namespace std;
int target = 11;
vector<int> nums= {1,1,1,1,1,1,1,1,1};

int main(){
    int minl = nums.size()+1;
        for(int i=0;i<nums.size();i++){
            int j=i;
            int sum = nums[i];
            while(sum<=target&&j<nums.size()){
                if(sum==target){
                    minl = min(minl,j-i+1);
                }
                j++;
                sum+=nums[j];
            }
        }
        if(minl==nums.size()+1) cout << 0;
        else cout << minl;
}