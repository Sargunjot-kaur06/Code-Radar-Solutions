#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int even_count = 0;
    for(i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            even_count++;
        }
    }
    printf("%d",even_count);

    int odd_count = 0;
    for(i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            odd_count++;
        }
    }
     printf("%d",odd_count);
     
    return 0;
}