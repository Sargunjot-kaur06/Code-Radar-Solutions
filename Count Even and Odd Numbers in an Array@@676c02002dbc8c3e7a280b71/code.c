#include<stdio.h>
int main(){
    int n,i,f = 1;
    scanf("%d",&n);
    
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n; i++){
        if(a[i] % 2 == 0)
        f++;
        {
        printf("%d ",f);    
        }
    }
    for(i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            printf("%d",a[i]);
        }
    }
    return 0;
}