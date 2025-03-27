#include<stdio.h>
int main() {
    int i,N,j;
    scanf("%d",&N);
    for(i = 1; i <= N; i++){
        for(j = N; j >= j; j++){
            printf("*");
        }
        printf("\n");
    }
}