#include<stdio.h>
int  main() {
    int rows;
    scanf("%d",&rows);

    for(int i = 1; i <= rows; i++){
        for(int space = 1; space <= rows-i; space++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}