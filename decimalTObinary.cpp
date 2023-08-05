#include<iostream>
using namespace std;
int main(){
  int n=10;
  int q;
  int r[32];
  int i=0;
  while(n>0){
    r[i]=n%2;
    n=n/2;
    i++;
  }
  for(int j=i-1;j>=0;j--){
    cout<<r[j];
  }

  //cout<<n;
  return 0;
}