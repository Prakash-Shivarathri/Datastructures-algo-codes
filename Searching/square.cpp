#include<iostream>
using namespace std;

int square(int x){
    // int i=1;
    // while(i*i<=x){
    //     i++;
    // }
    // return(i-1);

    int low=1, high=x, ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        int sq=mid*mid;
        if(sq==x){
            return mid;
        }else if(sq>x){
            high=mid-1;
        }else{
            low=mid+1;
            ans=mid;
        }
        
    }
    return ans;
}
int main(){
   int x;
   cout<<square(3);
   return 0;
}