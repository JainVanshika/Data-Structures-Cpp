#include<iostream>
using namespace std;
// 1
// 11
// 121
// 1331
// 14641
int nCr(int num){
  int fact=1;
  for(int i=1;i<=num;i++){
    fact=fact*i;
  }
  return fact;
}
int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<nCr(i)/(nCr(j)*nCr(i-j))<<" ";
    }
    cout<<endl;
  }
  return 0;
}