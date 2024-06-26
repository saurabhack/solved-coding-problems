#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int> digits){
    for(int i=digits.size()-1;i>=0;i--){
        if(digits[i]!=9){
            digits[i]++;
            return digits;
        }
        else{
            digits[i]=0;
        }
    }
    digits.insert(digits.begin(),1);
    return digits;
}
int main(){
    vector<int> digits({1,2,3});
    vector<int> ans(plusOne(digits));
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    plusOne(digits);
    return 0;
}