#include<stdio.h>
#include<limits.h>
int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",arr[i]);
    }
    int int_min;
    int largest = int_min;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0 && arr[i] > largest){
            largest = arr[i];
        }
    }
    if(largest != int_min) {
        printf("%d",largest);
    }
    else{
        printf("-1");
    }
    return 0;
}