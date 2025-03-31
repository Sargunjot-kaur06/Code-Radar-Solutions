#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int s;
    int first,second = s;
    if(arr[0] > arr[1]){
        first = arr[0];
        second = arr[1];
    }
    else{
        first = arr[1];
        second = arr[0];
    }
    for(int i = 2; i < n; i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i]!=first){
            second = arr[i];
        }
    }
    if (second == s) {
        printf("-1\n"); // All elements are equal
    } else {
        printf("%d\n", second);
    }
    return 0;
}