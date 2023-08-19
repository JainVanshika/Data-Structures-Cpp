//amazon
// Problem:
// Given an array arr[] of size N. The task is to find the first repeating element in the array of
// integers, i.e., an element that occurs more than once and whose index of first occurrence is
// smallest.

// Constraints:
// 1<=N<=10^6
// 0<= Ai <= 10^6
// input:
// 7
// 1 5 3 4 3 5 6
// output:2
// explain: 5 is appearing twice and its first appearance is at index 2 which is less tham 3 whose first index is 3
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n=7;
  int a[n]={1,5,3,4,3,5,6};
  int minNo=INT_MAX;
  int N=1e6+2;
  int b[N];
  for(int i=0;i<N;i++){
    b[i]= -1;
  }

  for(int i=0;i<n;i++){
    if(b[a[i]] != -1){
      minNo=min(minNo,b[a[i]]);
    }else{
      b[a[i]]=i;
    }
  }
  if(minNo== INT_MAX){
    cout<<"-1"<<endl;
  }else{
    cout<<minNo+1;
  }
  return 0;
}