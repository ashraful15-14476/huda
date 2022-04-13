#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    char st1[100], st2[100];
    scanf("%s %s",st1,st2);

    int l1 = strlen(st1);
    int l2 = strlen(st2);

    int LCS[l1+1][l2+1];

     for(int i = 0; i<= l1; i++)  {
        LCS[0][i] = 0;
     }
     for(int i = 0; i<= l1; i++)  {
        LCS[i][0] = 0;
     }

     for(int i = 1; i <= l1; i++)   {
        for(int j = 1; j <= l2; j++)
        {
            if(st1[i-1] == st2[j-1])
            {
                LCS[i][j] = LCS[i-1][j-1] + 1;
            }
            else
            {
                LCS[i][j] = max(LCS[i][j-1],LCS[i-1][j]) ;
            }
        }
    }

     for(int i = 0; i <= l1; i++)   {
        for(int j = 0; j <= l2; j++)
        {
            printf("%d\t",LCS[i][j]);
        }
        printf("\n");
    }

    return 0;
}
