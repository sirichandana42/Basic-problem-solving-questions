//linear search
#include <iostream>
using namespace std;

int linearsearch(int arr[],int n,int key){
  for(int i{0};i<n;i++)
  {
    if(arr[i]==key)
    {
      return i; 
      }
  }
  return -1; 
}

int main() {
int n;cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int key; cin>>key;
  cout<<"your value is at index: "<<linearsearch(arr,n,key)<<endl;

  return 0;
} 

//binary search
#include<iostream>
#include<algorithm>
using namespace std;
int binarysearch(int n,int key, int arr[])
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n; cin>>n;
    int arr[n];
    int key;cin>>key;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"sorted array = ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"the value"<<key<<"is present at the index :";
    cout<<binarysearch(n,key,arr);
}
