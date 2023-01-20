#include<iostream>
using namespace std;

int IndexfirstOcurrence(int arr[],int low,int high,int x,int n)
 {
    // int low=0, high=n-1;
    // int mid=(low+high)/2;
//      while(low<=high)
//      {
//         int mid=(low+high)/2;
//         if(x>arr[mid])
//        {
//            low=mid+1;
//        }
//        else if(arr[mid] > x)
//        {
//         high = mid-1;
//        }
//        else
//        {
//         if(mid == n-1 || arr[mid]!=arr[mid+1]){
//              return mid;
//         }
//         else{
//             low=mid+1;
//         }
//        }
//      }
//      return -1;

// recursive binary search
if(low > high)
      return -1;
   
   int mid=(low+high)/2;

	if(x > arr[mid])
		return IndexfirstOcurrence(arr, mid + 1, high, x, n);

	else if(x < arr[mid])
		return IndexfirstOcurrence(arr, low, mid - 1, x, n);

   else
	{
		if(mid == n-1 || arr[mid +1] != arr[mid])
			return mid;

		else
			return IndexfirstOcurrence(arr,mid+1,low,x,n);
	}

}

int main()
{
     int arr[] = {10,20,30,40,20,50,60}, n = 7;

	int x = 10;

    cout << IndexfirstOcurrence(arr, 0, n - 1, x, n);
	return 0;
}
