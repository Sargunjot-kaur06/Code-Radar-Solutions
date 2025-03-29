#include<stdio.h>
int main() {
    int i,n,f;
    scanf("%d",&n);

    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n; i++){
        if(n == arr[i]){
            f = 2;
        }
    }
    if(f == 2){
        printf("%d",arr[i]);
    }
    else{
        printf("-1");
    }
    return 0;
}