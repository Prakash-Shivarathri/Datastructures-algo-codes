#include <iostream>

using namespace std;

void reverse(int arr[], int n) 
{
   int start=0;
   int end=n-1;
   
   while(start < end) 
   {
       int temp = arr[end];
       arr[end] = arr[start];
       arr[start] = temp;
       
       start++;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
       end--;
   }
}

int main()
{
      int myarr[10];
      int size;
      cout<<"enter thr size of elements : "<<endl;
      cin>>size;
      myarr[size];
      cout<<"enter the array elements : "<<endl;
      for(int i=0; i<size;i++)
      {
          cin>>myarr[i];
      }
      
      cout<<"before reversing the elements : "<<endl;
      for(int i=0; i<size; i++)
      {
          cout<<myarr[i]<<" ";
      }
      cout<<endl;
      
      reverse(myarr,size);
      
      cout<<"after reversing the elements : "<<endl;
      
      for(int i=0; i<size; i++)
      {
          cout<<myarr[i]<<" ";
      }
      
}