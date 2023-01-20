#include<iostream>
using namespace std;
 
void bubblesort(int a[]) // To implement bubble sort fuction algorithm...
{
    int rounds=0;
  for(int i=0; i<5; i++)
  {
    rounds++;
    int flag = false;
    for(int j=0; j<5-i-1; j++) // after this we need to compare elements in array
    {
        if(a[j] > a[j+1]) // if it is true then we need to swap the two elements
        {
            flag = true;
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
    if(flag == false)
    {
        break;
    }
  }
  cout<<" No of rounds : "<<rounds<<endl;
}

int main() // To execute the function of algorithm...
{
  
  int arr[5];
  cout<<"enter the 5 numbers randomly in any order : "<<endl;
   for(int i=0; i<5; i++)
   {
    cin>>arr[i];
   }

  cout<<"Before bubble sorting elements : "<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    // we need to call the function
    bubblesort(arr);
    
    cout<<endl<<"after Sorting elements : ";
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }

}