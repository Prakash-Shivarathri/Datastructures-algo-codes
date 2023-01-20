#include<iostream>
using namespace std;

// bool sorted(int arr[], int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if(arr[j] < arr[i])
//             {
//                 return false;
//             }
//         }
//         //return true;
//     }
//             return true;

// }
// int main()
// {
    
     
//      sorted(myarr, size);
                                                     
//      for(int i=0; i<size; i++)
//      {
//         if(true)
//         {
//             cout<<"Yes";
//         }
//         else
//         {
//             cout<<"No";
//         }
//      }

//      return 0;
    
// }


bool sortornot(int arr[], int n)
{
    if(n == 0 || n == 1)
    {
        return true;
    }

    if( arr[n-1] < arr[n-2])
    {
        return false;
    }
   return sortornot( arr, n-1);
}

int main()
{
    int myarr[] = {10,20,50,40};
    
    int n=sizeof(myarr)/sizeof(myarr[0]);
    
   // bool a=sortornot(myarr,n);
    if (sortornot(myarr,n)  0)
      {
        cout<<"Yes"<<endl;
      }
    else
    {
        cout<<"No"<<endl;
    }

}