#include<iostream>
using namespace std;
int nCr(int num){
  int fact=1;
  for(int i=1;i<=num;i++){
    fact=fact*i;
  }
  return fact;
}
int main(){
  int n,r;
  cin>>n>>r;
  int ans=nCr(n)/(nCr(r)*nCr(n-r));
  cout<<ans<<endl;
  return 0;
}