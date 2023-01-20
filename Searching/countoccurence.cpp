// count occurence in a sorted array

#include<iostream>
using namespace std;

int firstoccurence(int arr[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(x>arr[mid])
        {
            low=mid+1;
        }
        else if(x<arr[mid]){
            high=mid-1;
        }
        else{
            if(mid==0 || arr[mid-1]!=arr[mid]){
                return mid;
            }else{
                high=mid-1;
            }

        }
    }
    return -1;
}
int lastoccurence(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(x>arr[mid]){
            low=mid+1;
        }else if(x<arr[mid]){
            high=mid-1;
        }else{
            if(mid==n-1 || arr[mid]!=arr[mid+1]){
                return mid;
            }else{
                low=mid+1;
            }
        }
    }
    return -1;
}

int countoccurrence(int arr[],int n,int x){

	int first = firstoccurence(arr, n, x);

	if(first == -1)
		return 0;
	else 
		return lastoccurence(arr, n, x) - first + 1;
}
int  main()
{
   int arr[] = {10, 10, 20, 20, 40, 40}, n = 6;

   int x = 20;

   cout << countoccurrence(arr, n, x);

	return 0;
}