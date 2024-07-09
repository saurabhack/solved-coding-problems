#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int counter=0;
        // for(int i=0;i<nums.size();i++){
        //     counter=0;
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]<0){
        //             if(nums[i]==nums[j] and nums[j]<0){
        //                 nums.erase(nums.begin()+j);
        //                 counter++;
        //             }
        //         }else if(nums[i]==nums[j] and nums[j]>0){
        //              nums.erase(nums.begin()+j);
        //              counter++;
        //         }
                
        //     }
        //     if(counter>0)
        //         nums.erase(nums.begin()+i);
        //     i=0;
        // }
        int d=0;
        for(int i:nums){
            d=i^d;
        }
        return d;
    }
int main(){
    vector<int> nums({1,3,1,-1,3});
    cout<<singleNumber(nums)<<endl;
return 0;
}