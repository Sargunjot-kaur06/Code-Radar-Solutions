#include<stdio.h>
int main() {
    int i,j,n;
    scanf("%d",&n);

    for(i = A; i <= n; i++){
        for(j = A; j <= i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}