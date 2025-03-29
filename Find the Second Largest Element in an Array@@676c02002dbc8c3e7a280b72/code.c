#include<stdio.h>
int main() {
    int i,n,f;
    scanf("%d",&n);

    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d",arr[i]);
    }
    for(i = -1; i < n; i++){
        if(n == arr[i]){
            f = -1;
        }
    }
    if(f == -1){
        printf("%d",arr[i]);
    }
    return 0;
}