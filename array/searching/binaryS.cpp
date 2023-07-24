#include<bits/stdc++.h>
using namespace std;
int binarySearch(int n, int key,int array[]){
  int l=0;
  int h=n;
  //int i=0;
  while(l<=h){
    int mid=(l+h)/2;
    if(array[mid]==key)
    {
      return mid;
    }else if(array[mid]<key){
      l=mid+1;
      //mid=(l+h)/2;
    }else{
      h=mid-1;
      //mid=(l+h)/2;
    }
  }
  return -1;
}
int main(){
  int n,key;
  int array[n];
  cout<<"enter the n:";
  cin>>n;
  cout<<"enter elements:";
  for(int i=0;i<n;i++){
    cin>>array[i];
  }
  cout<<"enter the number to search:";
  cin>>key;
  int BS=binarySearch(n,key,array);
  cout<<"index value of "<<key<<" is "<<BS;
  return 0;
}