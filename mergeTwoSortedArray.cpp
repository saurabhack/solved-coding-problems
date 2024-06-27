#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1,int m,int n,vector<int>& nums2){
    int last=m+n-1;
    while(m>0 and n>0){
        if(nums1[m-1]>nums2[n-1]){
            nums1[last]=nums1[m-1];
            m--;
        }else{
            nums1[last]=nums2[n-1];
            n--;
        }
        last--;
    }
    while(n>0){
        nums1[last]=nums2[n-1];
        n--;
        last--;
    }
    
}
int main(){

    vector<int> nums1({1,2,3,0,0,0});
    vector<int> nums2({2,5,6});
    int m=3;
    int n=3;
    merge(nums1,m,n,nums2);
    for(int i=0;i<nums1.size();i++){
        cout<<nums1[i]<<" ";
    }cout<<endl;

return 0;
}