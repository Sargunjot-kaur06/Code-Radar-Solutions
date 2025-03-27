#include<stdio.h>
int main() {
    int i,N,j;
    scanf("%d",&N);
    for(i = N; i >= 1; i--){
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}