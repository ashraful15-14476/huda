#include <bits/stdc++.h>
using namespace std;

int main (){
    long long int n;
    int k,r=0;
    scanf("%lld %d",&n,&k);
    while(k--){
        r = n%10;
        if(r==0){
            n/=10;
        }
        else{
            n-=1;
        }
    }
    printf("%lld\n",n);
    return 0;
}