#include<iostream>
using namespace std;
int findindex(string haystack,string needle){
    int m=haystack.length();
    int n=haystack.length();
    for(int i=0;i<m-n+1;i++){
        if(haystack.substr(i,n)==needle){
            return i;
        }
    }
    return -1;
}
int main(){
    string haystack="leetcode";
    string needle="lee";
    int ans=findindex(haystack,needle);
    cout<<ans<<endl;
    return 0;
}