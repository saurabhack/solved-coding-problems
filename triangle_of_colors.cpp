#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int find(int a,int b){
        int c=0;
        int d=0;
        int l=1;
        while(a>0 || b>0){
            if(d==0){
                if(a>=l){
                    a=a-l;
                }else{
                    break;
                }
            }else{
                if(b>=l){
                    b=b-l;
                }else{
                    break;
                }
            }
            c++;
            l++;
            d=d^1;
        }
        return c;
    }
    int maxHeightOfTriangle(int red, int blue) {
        int k1= find(red,blue);
        int k2=find(blue,red);  
        return max(k1,k2);
        
    }
int main(){
    
    cout<<maxHeightOfTriangle(4,2)<<endl;
    return 0;
}