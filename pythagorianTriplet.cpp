#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
// int maximum(int x,int y,int z){
//   if(x>y && x>z){
//     return x;
//   }else if(y>x && y>z){
//     return y;
//   }else{
//       return z;
//     }
//   return 0;
// }
bool check(int x,int y,int z)
{
  int a=max(x,max(y,z));
  int b,c;
  if(a==x){
    b=y;
    c=z;
  }else if(a==y){
    b=x;
    c=z;
  }else{
    b=x;
    c=y;
  }
  if(pow(a,2)==pow(b,2)+pow(c,2)){
    return true;
  }else{
    return false;
  }

}
int main(){
  int x,y,z;
  cin>>x>>y>>z; 
  if(check(x,y,z)){
    cout<<"pythagoras triplet";
  }else{
    cout<<"not a pythagoras triplet";
  }

  return 0;
}