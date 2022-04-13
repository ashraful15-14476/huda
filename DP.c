#include<stdio.h>
int max(int a,int b){return a>b?a:b;}
int main(){
    int n,k,i,j;
    scanf("%d %d",&n,&k);
    int W[n+1],P[n+1],DP[n+1][k+1];
    for(i=1;i<=n;i++){
        scanf("%d %d",&W[i],&P[i]);
    }
    for(i=0;i<=n;i++){
        DP[i][0]=0;
    }
    for(i=0;i<=k;i++){
        DP[0][i]=0;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=k;j++){
            DP[i][j]=DP[i-1][j];
            if(j>=W[i]){
                DP[i][j]=max(DP[i][j],DP[i-1][j-W[i]]+P[i]);
            }
        }
    }
    printf("%d\n",DP[n][k]);
    return 0;
}
/**
5 4
1 8
2 4
3 0
2 5
2 3

expected 13
*/
