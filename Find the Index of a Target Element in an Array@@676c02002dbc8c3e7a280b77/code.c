#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int t,index;
    scanf("%d",&t);

    if (index == t){
        printf("%d",t);
    }
    else{
        printf("-1");
    }
    return 0;
}