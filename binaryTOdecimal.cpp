#include<iostream>
using namespace std;
int main(){

  int b=101101;
  int i=1;
  int temp=b;
  int value=0;
  while(temp){
    int lastd=temp%10;
    temp=temp/10;
    value+=lastd*i;
    i=i*2;
  }
  cout<<value;
  return 0;
}