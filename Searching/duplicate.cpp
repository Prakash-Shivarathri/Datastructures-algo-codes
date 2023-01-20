#include<iostream>
using namespace std;

int repeatation(int arr[],int n)
{
    // for(int i=0; i<n-1;i++)
    // {
    //     for(int j=i+1; j<n;j++)       time complexity= O(n^2)
    //     {
    //         if(arr[i]==arr[j])
    //         {
    //             return arr[i];
    //         }
    //     }
    // }

    // {
    //     for(int i=0;i<n-1;i++)
    //     {
    //         if(arr[i]==arr[i+1])   // time complexity = O(logn)
    //         {
    //             return arr[i];
    //         }
    //     }
    // }

    for(int i=0; i<n-1;i++)
    {
        if(arr[arr[i] < 0])
        {
            return arr[i];
        }
        else{
            arr[arr[i]] =  - arr[arr[i]];

        }
    }
}
int main()
{
    int arr[] = {10,10,40,50,60,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    
  int result =  repeatation(arr, n);

    cout<<result;
 
    return 0;
}