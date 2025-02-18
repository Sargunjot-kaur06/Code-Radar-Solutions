#include<stdio.h>
int main() {
    int j,N;
    scanf("%d",&N);
    {
        for(j = 1; j <= 10; j++)
        printf("%d  x  %d =  %d\n",N, j, N * j);
    }
    printf("\n");
    return 0;
}