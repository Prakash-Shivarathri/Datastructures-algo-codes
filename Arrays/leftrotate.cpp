#include<iostream>
using namespace std;

void rotates(int arr[], int n)
{
    int temp=arr[0];
    for(int i=1; i<n; i++)
    {
        arr[i-1]=arr[i];
        // arr[n-1]=temp;
    }
    arr[n-1]=temp;
    
}
int main()
{
  int myarr[10]={1,2,3,4,5,6};
    int n=6;
    
   
   rotates(myarr,n);
   for(int i=0; i<n;i++)
   {
    cout<<myarr[i]<<" ";
   }
    return 0;
}