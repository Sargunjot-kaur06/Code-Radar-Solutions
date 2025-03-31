#include<stdio.h>
int main() {
    int n;
    int a[i];
    scanf("%d",&n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    if(n < 2)
    printf("-1\n");
    return 0;

    int first = min, second = min;
    for(int i = 0; i < n; i++){
        if (int arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if(int arr[i] > second && a[i]! = first){
            second = arr[i];
        }
    }
    if(second == min){
        printf("-1\n");
    }
    else{
        printf("%d\n",second);
    }
    return 0;
}