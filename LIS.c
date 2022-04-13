#include<stdio.h>

int main(){
    int ar[10] = {5,2,4,6,8,1,4,3,9,5};
    int LIS[10];

    for(int i = 0; i< 10; i++)
        LIS[i] = 1;

    for(int i = 1; i < 10; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(ar[i] > ar[j] && LIS[i] < LIS[j]+1)
            {
                LIS[i] = LIS[j]+1;
            }
        }
    }

    int length = LIS[0];
    for(int i = 1; i < 10; i++)
        if(LIS[i]>length)
            length = LIS[i];
    printf("LIS = %d\n", length);

    return 0;
}
