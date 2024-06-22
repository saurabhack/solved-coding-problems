#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int lastSize(string s){
    stringstream lineStream(s);
    vector<string> st(istream_iterator<string>(lineStream),{});
    return st[0].size()-1;
}
int main(){
    cout<<lastSize("saurabh kamane")<<endl;
    return 0;
}