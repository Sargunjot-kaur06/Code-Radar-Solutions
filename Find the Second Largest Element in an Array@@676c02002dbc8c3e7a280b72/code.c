#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    if(n < 2)
    printf("-1\n");
    return 0;

    int first = int_min, second = int_min;
    for(i = 0; i < n; i++){
        if (arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && a[i]! = first){
            second = arr[i];
        }
    }
    if(second == int_min){
        printf("-1\n");
    }
    else{
        printf("%d\n",second);
    }
    return 0;
}