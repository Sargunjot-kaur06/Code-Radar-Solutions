#include<stdio.h>
int main() {
    int j,n;
    scanf("%d",&n);
    {
        for(j = 1; j <= 10; j++)
        printf("%d x %d = %d\n",n, j, n * j);
    }
    printf("\n");
    return 0;
}