#include<stdio.h>
int main() {
    int i,j,N;
    scanf("%d",&N);

    for(i = 1; i <= N; i++){
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        print("\n");
    }
    return 0;
}