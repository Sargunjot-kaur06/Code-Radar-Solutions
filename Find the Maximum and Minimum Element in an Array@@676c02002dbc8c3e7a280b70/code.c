#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[];
    for(int i = 0; i < n; i++) {
        scanf("%d",a[n]);
    }
    int max = a[0]; {
    if(a[i] > max)
    max = a[i];
    }
    printf("%d",max);

    int min = a[0];
    {
        if(a[i] < min)
        min = a[i];
    }
    printf("%d",min);
}