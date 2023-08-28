#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=7;
    int a[n]={8,-2,-5,1,3,1,1};
    int sum1=0, sum2=0;
    for(int i=1;i<n-1;i++){
        sum1=0;
        sum2=0;
        for(int j=0;j<i;j++){
            sum1+=a[j];
        }
        for(int k=i+1;k<=n;k++){
            sum2+=a[k];
        }
        if(sum1==sum2){
            cout<<"equillibrium number:"<<a[i]; //-5
            break;
        }
    }
    
    

    return 0;
}
