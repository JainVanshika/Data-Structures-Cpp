//sum of subarray
#include<bits/stdc++.h>
using namespace std;
void sumSubArray(int n,int array[]){
  int sum=0;
  int subarray=n*(n+1)/2;
  cout<<"no. of subarray:"<<subarray<<endl;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      sum+=array[j];
      cout<<sum<<endl;
    }
    sum=0;
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
  sumSubArray(n,array);
  return 0;
}