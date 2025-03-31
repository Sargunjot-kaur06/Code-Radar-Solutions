#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",arr[i]);
    }
    
    int largest = min;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0 && a[i] > largest){
            largest = arr[i];
        }
    }
    if(largest != min) {
        printf("%d",largest);
    }
    else{
        printf("-1");
    }
}