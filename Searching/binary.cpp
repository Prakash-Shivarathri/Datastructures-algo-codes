#include<iostream>
using namespace std;

int binary(int arr[], int x, int n)
{
     int low=0;
     int high=n-1;
     
     while(low<=high)
     {
        int mid = (low+high)/2;
        if(arr[mid] == x)
        {
            return mid;
        }
        else if(arr[mid] > x)
        {
            high = mid-1;
        }
        else
        {
           low = mid+1;
        }

      return -1;

     }
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 20;
    
  int result =  binary(arr, x, n-1);

    cout <<result;
 
    return 0;
}