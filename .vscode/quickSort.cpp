#include<iostream>
using namespace std;
// quicksort algorithm...
int partitions(int arr[], int s, int e)
{
     int pivot = arr[e];
     int pIndex = s;
     for(int i=s; i<e; i++)
     {
        if(arr[i]<=pivot)
        {
              int temp=arr[i];
              arr[i]=arr[pIndex];
              arr[pIndex] = temp;
              pIndex++;
        }
     }
     int temp=arr[e];
     arr[e]=arr[pIndex];
     arr[pIndex]=temp;

     return pIndex;
}

void quickSort(int arr[],int s,int e)
{
    if(s<e)
    {
        int p=partitions(arr,s,e);
        quickSort(arr,s,(p-1));// recursive quicksort calls left subarray partition..
        quickSort(arr,(p+1), e);// recursive quicksort calls right subarray partition..
    }

}

int main()
{
int myarr[5];
  cout<<"enter the 5 numbers randomly which is in unsorted array : "<<endl;
  for(int i=0 ; i<5; i++)
  {
      cin>>myarr[i];
  }

  cout<<" before the sorting the elements : "<<endl;

  for(int i=0; i < 5; i++)
  {
    cout<<myarr[i]<<" ";
  }
 cout<<endl;
 // Here we need to call the function selection sort...
  quickSort(myarr,0,4);

  cout<<"after the sorting the elements : "<<endl;

  for(int i=0; i<5; i++)
  {
    cout<<myarr[i]<<" ";    
  }
}