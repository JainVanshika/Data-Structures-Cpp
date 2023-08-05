#include<iostream>
#include<cmath>
using namespace std;
int octTOdec(int num){
  int i=0;
  int sum=0;
  while(num>0){
    int lastdigit=num%10;
    num=num/10;
    sum+=lastdigit*(pow(8,i));
    i++;
  }

  return sum;
}
int main(){
  int n;
  cin>>n;
  int ans=octTOdec(n);
  cout<<ans;
  return 0;
}