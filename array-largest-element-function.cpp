#include<bits/stdc++.h>
using namespace std;

int main()
{

  int arr[]={10, 89, 67, 56, 45, 78};
  int n = sizeof(arr)/sizeof(arr[0]);
  int max_element = INT_MIN;

  for(int i=0; i<n; i++)
  { if(arr[i]>max_element)
      max_element = arr[i];
  }

  cout<<max_element;
}