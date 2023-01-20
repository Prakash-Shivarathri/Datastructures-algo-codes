#include<iostream>
#include<algorithm>
using namespace std;




void printfreq(int arr[], int n)
{
    sort(arr,arr+n);
    int count = 1, i=1;
    while(i<n)
    {
        while(i<n && arr[i]==arr[i-1])
        {
            count++;
            i++;
        }
        cout<<arr[i-1]<<"-"<<count<<endl;
        i++;
        count = 1; // we have to set count =1 from begin which means we start comparing another element....
    }
    if(n==1 || arr[n-1]==arr[n-2])
    {
        cout<<arr[n-1]<<"-"<<1;
    }
}

int main()
{

     int myarr[]={10,10,20,10,20,40,30,30};
     int n = sizeof(myarr)/sizeof(myarr[0]);

   printfreq(myarr,n);
   return 0;    
}
