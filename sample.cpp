#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    int size=4;
    int nums=0;
    int i=0;
    while(i<size){
        nums=nums*10+arr[i];
        // cout<<nums<<endl;
        i++;
        cout<<i<<endl;
    }
    cout<<nums<<endl;
    return 0;
} // namespace std;
