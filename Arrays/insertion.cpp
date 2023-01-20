#include<iostream>
using namespace std;

 void insertion(int arr[], int n,int x, int pos)
{
    for(int i = n; i >= pos; i--)
    {
        arr[i]=arr[i-1];
        // arr[pos-1]=x;
       
    } // aftert the statement false the for loop statement terminates then out statement will be executed...
    arr[pos-1]=x;
    
}
int main()
{
     int myarr[6]={1,2,3,4,5};
    int n=sizeof(myarr)/sizeof(myarr[0]);
     int a = 10;
     int position = 2;
     cout<<"before inserting the element in the array : ";
     for(int i=0;i<n-1;i++)
     {
        cout<<myarr[i]<<" ";
     }
     cout<<endl;   
     insertion(myarr,n,a,position);

     cout<<"after inserting the element in the array : ";
      for(int i=0; i < n; i++) {
       cout<<myarr[i]<<" ";
      }

}