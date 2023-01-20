#include<iostream>
using namespace std;

void selectionsort(int a[]) // To implement selection sort fuction algorithm...
{
   for(int i=0; i<4; i++)
   {
   int min=i;

    for(int j=i+1; j<5; j++) //(i+1) we have to compare next index element
    {
        if(a[j] < a[min])
        {
            min = j; // if true then we need to update the "min" value 
        }
    }
    if(min != i)
    {
        int temp = a[min];
        a[min]=a[i];
        a[i]= temp;
    }
   }
}

int main() // To execute the function of algorithm...
{
  int arr[5];
  cout<<"enter the 5 numbers randomly which is in unsorted array : "<<endl;
  for(int i=0 ; i<5; i++)
  {
      cin>>arr[i];
  }

  cout<<" before the sorting the elements : "<<endl;

  for(int i=0; i < 5; i++)
  {
    cout<<arr[i]<<" ";
  }
 cout<<endl;
 // Here we need to call the function selection sort...
  selectionsort(arr);

  cout<<"after the sorting the elements : "<<endl;

  for(int i=0; i<5; i++)
  {
    cout<<arr[i]<<" ";    
  }
  cout<<"minimum element in the given array : "<<arr[0];

}

