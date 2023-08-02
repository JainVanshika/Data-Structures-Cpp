#include<iostream>
using namespace std;

void Fseries(int num){
  int t1=0,t2=1,t;
  for(int i=1;i<=num;i++){
    cout<<t1<<endl;
    t=t1+t2;
    t1=t2;
    t2=t;
  }
  return;
}
int main(){
  int a=0,b=1,range;
  cout<<"Enter the range: "; 
  cin>>range;
  Fseries(range);
  return 0;
}