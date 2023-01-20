#include<iostream>
using namespace std;

void deletion(int arr[], int n, int x)
 {
//    int j=0;
//    for(int i=0;i<n;i++){
//     if(arr[i]!=x) {
//         arr[j] = arr[i];
//         j++;
//     }
//    }
  int i;
for(i=0;i<n;i++){
    if(arr[i]==x) break;
}
for(;i<n;i++){
    arr[i]=arr[i+1];
}
}
int main()
{
    int arr[] = {11, 15, 6, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 6;

   
    deletion(arr, n, x);
 
    cout << "Modified array is \n";
    for (int i=0; i<n-1; i++)
    cout << arr[i] << " ";
 
    return 0;
}