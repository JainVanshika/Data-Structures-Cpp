#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
  int ans=0;
  while(n>0){
    int lastdigit=n%10;
    ans=(ans*10)+lastdigit;
    n/=10;
  }
  return ans;
}
int add(int num1,int num2){
  int sum=0,carry=0;
  while (num2 >0 && num1>0) {
    if(num1%2==0 && num2%2==0){
      sum=sum*10+carry;
      carry=0;
    }else if((num1%2==0 &&num2%2==1)||(num2%2==0 &&num1%2==1)){
      if(carry==1){
        sum=sum*10+0;
        carry=1;
      }else{
        sum=sum*10+1;
        carry=0;
      }
    }else{
      sum=sum*10+carry;
      carry=1;
    }
    num1=num1/10;
    num2=num2/10;
  }
  while(num1>0){
    if(carry==1){
      if(num1%2==1){
        sum=sum*10+0;
        carry=1;
      }else{
        sum=sum*10+1;
        carry=0;
      }
    }else{
      sum=sum*10+num1%2;
    }
    num1/=10;
  }
  while(num2>0){
    if(carry==1){
      if(num2%2==1){
        sum=sum*10+0;
        carry=1;
      }else{
        sum=sum*10+1;
        carry=0;
      }
    }else{
      sum=sum*10+num2%2;
    }
    num2/=10;
  }if(carry==1){
    sum=sum*10+1;
  }
  sum=reverse(sum);
  return sum;
}


int main(){
  int num1,num2;
  cin>>num1>>num2;
  int ans=add(num1,num2);
  cout<<ans;
  return 0;
}