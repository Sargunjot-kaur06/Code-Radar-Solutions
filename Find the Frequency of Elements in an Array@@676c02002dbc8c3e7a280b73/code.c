#include<stdio.h>
int main(){
    int n,i,num;
    scanf("%d",&n);
    
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    
    scanf("%d",&num);
    int count = 0;
    for(i = 0; i < n; i++){
        if(a[i] == num)
        count++;
    }
    printf("%d",count);
    return 0;
}