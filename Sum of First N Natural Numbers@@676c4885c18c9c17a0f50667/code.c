#include<stdio.h>
int main() {
    int n,i,f = 0;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        f = f + i;
    }
    printf("%d",f);
    return 0;
}