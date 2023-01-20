#include<iostream>
using namespace std;
// merge function sorting algorithm..
//merge function..
//actually we will compare values in the merge function..
void merge(int myarr[],int l, int m, int r)
{
   int i=l;// starting index for left subarray..
   int j=m+1; // starting index for right subarray..
   int k=l; // starting index for temporary array..
 // let initialize the temporary array named temp;
  int size = r;
  int temp[size];
   while(i<=m && j<=r)
   {
    if(myarr[i]<=myarr[j])
    {
        temp[k]=myarr[i];
        i++;
        k++;// after that we need to move to another index so that k++..
    }
    else
    {
        temp[k]=myarr[j];
        j++;
        k++;
    }
   } 
   while(i<=m)
   {
    temp[k]=myarr[i];
    i++;
    k++;
   } 
   while(j<=r)
   {
    temp[k]=myarr[j];
    j++;
    k++;
   }
   for(int p=l;p<=r;p++)
   {
    myarr[p]=temp[p];
   }
}

//mergesort function
//here we can perform the splite the arrays using the midpoit method still the single subarray create..
void mergeSort(int myarr[], int l, int r)
{
     if(l < r)
     {
        int m = (l+r)/2;
        mergeSort(myarr,l,m);// this is for left most subarray function..
        mergeSort(myarr,m+1,r);// this  is for right most subarray function..
        merge(myarr,l,m,r);// here we need to merge the subarray into array so that we have call the outside function which is merge...

     }
}
//execution function
int main()
{
  int size;
  cout<<"enter the size of array : "<<endl;
  cin>>size;
int arr[size];
  cout<<"enter the 5 numbers randomly which is in unsorted array : "<<endl;
  for(int i=0 ; i<size; i++)
  {
      cin>>arr[i];
  }

  cout<<" before the sorting the elements : "<<endl;

  for(int i=0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
 cout<<endl;
 // Here we need to call the function selection sort...
  mergeSort(arr,0,(size-1));

  cout<<endl<<"after the sorting the elements : "<<endl;

  for(int i=0; i<size; i++)
  {
    cout<<arr[i]<<" ";    
  }
  

}

