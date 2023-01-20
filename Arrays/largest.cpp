#include<iostream>
using namespace std;

int largest(int arr[], int n)
{
     int max = arr[0];
     for(int i=1; i < n; i++)
     {
        if(arr[i]>max)
        {
            max=arr[i];
            // return max;
        }
     }
                 return max;

}
int main()
{
      int myarr[]={10,20,30,40};
      int n = sizeof(myarr)/sizeof(myarr[0]);

      //int x = largest(myarr, n)
      cout<<"the largest element  in the array is : "<<largest(myarr, n);

      return 0;
}