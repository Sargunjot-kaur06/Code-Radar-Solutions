#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int i,t,index = 0;
    scanf("%d",&t);

    int index = -1; // Initialize to -1 (not found)
    
    // Search through the array
    for(int i = 0; i < n; i++) {
        if(arr[i] == t) {
            index = i;
            break; // Exit loop once found
        }
    }

    printf("%d", index);
    return 0;
}