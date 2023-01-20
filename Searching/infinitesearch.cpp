#include<iostream>
using namespace std;

int infinite(int arr[],int x){
    int i=0;
    while(true){
        if(arr[i]==x){
            return i;
        }else{
            if(arr[i]>x){
                return -1;
            }else{
                i++;
            }
        }
    }
}
int main(){
 int arr[]={1,2,3,4,7,6} , x;
 cout<<infinite(arr,5);
 return 0;
 
}