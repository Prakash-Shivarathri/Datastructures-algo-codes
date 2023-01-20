#include<iostream>
using namespace std;
    
// find the leaders in the given array...
// leaders ntg but greater than this element on the right side of it....
 void learder(int arr[], int n)
 {
//     for(int i=0; i<n; i++)
//     {
//         bool flag = false;
//         for(int j=i+1;j<n; j++)
//         {
//             if(arr[i]<=arr[j])
//             {
//              flag = true;
//              break;
//             }
//         }
//         if(flag==false)
//         {
//            cout<< arr[i]<<" ";
//         }
//     }


       // Efficient manner.....
       // last element in the array it always leader of the array because besides of the element not present...
      //  int temp[n];
       int  currentleader= arr[n-1];

       cout<<currentleader<<" ";
       for(int i=n-2; i >=0 ; i--)
       {
           if(currentleader < arr[i])
           {
            currentleader = arr[i];
           cout<<currentleader<<" ";
            // temp[i]=arr[i];

           }
        //    cout<<currentleader<<" ";
       }
       
 }


int main()
{
     int myarr[]={7,10,4,3,6,5,2};
     int n = sizeof(myarr)/sizeof(myarr[0]);
;   
   learder(myarr,n);
   return 0;    
}