#include<bits/stdc++.h>
using namespace std;
void insertionsort(int n,int array[]){
  for(int i=1;i<n;i++){
    int current=array[i];
    int j=i-1;
    while(array[j]>current &&j>=0){
      array[j+1]=array[j];
      j--; 
    }
    array[j+1]=current;
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
  insertionsort(n,array);
  return 0;
}