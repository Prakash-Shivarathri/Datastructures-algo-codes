#include<iostream>
using namespace std;

int duplicatelement(int arr[], int n)
{
    //  int temp[n];
    //  temp[0]=arr[0];
    //  int size = 1;
    //  for(int i=1;i<n;i++)
    //  {
    //     if(temp[size-1] != arr[i])
    //     {
    //         temp[size]=arr[i];
    //         size++;
    //     }
    //  }
    //  for(int i=0;i<size;i++)
    //  {
    //     arr[i]=temp[i];
    // //  }
    int res=1;
    for(int i=1; i<n;i++)
    {
        if(arr[res-1] != arr[i])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

int main()
{
    int myarr[10]={1,2,2,3,1,2,3};
    int n=6;
    
   
   cout<< duplicatelement(myarr,n)<<" ";
    
    return 0;
}