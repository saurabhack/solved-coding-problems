#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int one=1;
    int second=1;
    for(int i=0;i<n-1;i++){
        int temp=one;
        one+=second;
        second=temp;
    }
    cout<<one<<endl;
    return 0;
}