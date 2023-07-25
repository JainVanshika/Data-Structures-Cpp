#include<bits/stdc++.h>
using namespace std;
void selectionsort(int n,int array[]){
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(array[j]<array[i]){
        int temp=array[j];
        array[j]=array[i];
        array[i]=temp;
      }
    }
  }
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
  //int SS=selectionsort(n,array);
  selectionsort(n,array);
  return 0;
}