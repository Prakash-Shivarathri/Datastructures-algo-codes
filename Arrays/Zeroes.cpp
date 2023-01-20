#include<iostream>
using namespace std;

void moveZeroes(int arr[], int n)
 {
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]=0)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 if(arr[j != 0])
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
      
      
      //efficient methond...
     int count=0;
     for(int i=0; i<n;i++)
     {
        if(arr[i] != 0){
            swap(arr[i],arr[count]),
            count++;
        }
     }
}

int main()
{    
   int myarr[10]={10,8,0,0,12};
    int n=6;
    
   
   moveZeroes(myarr,n);
   for(int i=0; i<n;i++)
   {
    cout<<myarr[i]<<" ";
   }
    return 0;
}