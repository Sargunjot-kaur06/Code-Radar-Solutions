#include<stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);

    for(int i = 1; i <= rows; i++){
        for(int space = 1; space <= rows-i; space++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("%d",j);
        }
        for(int k = i-1; k >= 1; k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}