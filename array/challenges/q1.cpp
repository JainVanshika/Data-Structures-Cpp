//given an array[] of size n. for every i from 0 to n-1 output max(a[0],a[1]...a[i]);
#include<bits/stdc++.h>
using namespace std;
void maxTillI(int n,int array[]){
  int maxNo=INT_MIN;
  for(int i=0;i<n;i++){
    if(array[i]>maxNo){
      maxNo = array[i];
      cout<<maxNo<<endl;
    }else{
      cout<<maxNo<<endl;
    }
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
  maxTillI(n,array);
  return 0;
}