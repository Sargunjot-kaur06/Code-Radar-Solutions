#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    int palidrome = 1;
    for(i = 0; i < n/2; i++){
     if(arr[i] != arr[n-1-i]){
      palidrome = 0;
      break;
    }
    }
    if(palidrome){
        printf("YES");
    }
    else{
        printf("NO");
    }
}