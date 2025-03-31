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

    if (arr[i] == index){
        printf("%d",t);
    }
    else{
        printf("-1");
    }
    return 0;
}