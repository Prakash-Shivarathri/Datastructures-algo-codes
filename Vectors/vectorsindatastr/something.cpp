#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    // to set ascending order in the numbers...
      vector<int> num;
    // to set ascending order in the numbers...
    for(int i=1; i<5;i++)
    num.push_back(i);
  cout<<"print the numbers in the increasing order..";
  for(auto i=num.begin(); i != num.end(); i++)
  {
    cout<<*i<<" ";
  } 
  cout<<endl;
  // to set descending order in the numbers...
//    for(int i=1; i<5;i++)
//     num.push_back(i);
  cout<<"print the numbers in the increasing order.."<<endl;
  for(auto ip=num.rbegin(); ip != num.rend(); ip++)
  {
    cout<<*ip<<" ";
  } 
   
}