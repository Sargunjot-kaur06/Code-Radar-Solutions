#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        scanf("%d",n[i]);
    }
    int max = n[0]; {
    if(n[i] > max)
    max = n[i];
    }
    printf("%d",max);

    int min = n[0];
    {
        if(n[i] < min)
        min = n[i];
    }
    printf("%d",min);

}