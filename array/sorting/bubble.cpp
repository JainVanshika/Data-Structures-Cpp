#include<bits/stdc++.h>
using namespace std;
void bubblesort(int n,int array[]){
  for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
    if(array[i]>array[i+1]){
      int temp=array[i];
      array[i]=array[i+1];
      array[i+1]=temp;
    }
  }}
  for(int i=0;i<n;i++){
    cout<<array[i]<<" ";
  }
  return;
}
int main(){
  int n;
  int array[n];
  cout<<"enter the n:";
  cin>>n;
  cout<<"enter elements:";
  for(int i=0;i<n;i++){
    cin>>array[i];
  }
  bubblesort(n,array);
  return 0;
}