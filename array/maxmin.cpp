#include<bits/stdc++.h>
using namespace std;
int main(){
  //print max and min element
  int n;
  int array[n];
  cout<<"enter the n:";
  cin>>n;
  cout<<"enter elements:";
  for(int i=0;i<n;i++){
    cin>>array[i];
  }
  int maxNo=INT_MIN;
  int minNo=INT_MAX;
  for(int i=0;i<n;i++){
    // if(array[i]>max){
    //   max=array[i];
      
    // }else if(array[i]<min){
    //   min=array[i];
    // }
    maxNo=max(maxNo,array[i]);
    minNo=min(minNo,array[i]);
  }
  cout<<"max number is "<<maxNo<<endl;
  cout<<"min number is "<<minNo;
  // for(int i=0;i<n;i++){
  //   cout<<array[i]<<" ";
  // }

  return 0;
}