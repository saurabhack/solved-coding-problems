#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
string addBinary(string a,string b){
    int l1=a.size()-1;
    int l2=b.size()-1;
    string result;
    int carry=0;
    while(l1>=0 or l2>=0){
        int sum=carry;
        if(l1>=0){
            sum+=a[l1--]-'0';
        }
        if(l2>=0){
            sum+=b[l2--]-'0';
        }
        if(sum>1){
            carry=1;
        }else{
            carry=0;
        }
        result+=to_string(sum%2);
    }
    if(carry){
        result+=to_string(carry);

    }
    reverse(result.begin(),result.end());
    return result;
}
int main(){
    cout<<addBinary("11","1")<<endl;
    return 0;
}