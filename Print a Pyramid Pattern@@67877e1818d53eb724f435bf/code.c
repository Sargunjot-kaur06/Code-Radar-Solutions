#include<stdio.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        for (int space = 0; space < n-i; space++) {
           printf(" ");
        }
        for(j = 1; j <= (2*i); j++) {
            printf("*");
            }
        printf("\n"); 
    }
    return 0;
}