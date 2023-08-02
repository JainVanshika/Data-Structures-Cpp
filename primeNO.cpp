#include<iostream>
#include<cmath>
#include<cmath>
using namespace std;
bool isprime(int n){
    for(int j=2;j<=sqrt(n);j++){
      if(n%j==0){
        return false;
      }
    }
    return true;

}
int main(){
  int a,b;
  cout<<"enter the starting and ending range:";
  cin>>a>>b;
  for(int i=a;i<=b;i++){
    if(isprime(i)){
      cout<<i<<" ";
    }
  }
  //cout<<prime(a,b);
  return 0;
}