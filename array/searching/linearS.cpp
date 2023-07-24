#include<bits/stdc++.h>
using namespace std;
int linearSearch(int n,int key,int array[]){
  for(int i=0;i<n;i++){
    if(array[i]==key)
    {
      return i;
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
  int LS=linearSearch(n,key,array);
  cout<<"index value of "<<key<<" is "<<LS;
  return 0;
}