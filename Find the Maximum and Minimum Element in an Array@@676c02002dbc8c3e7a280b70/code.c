#include<stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
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
    return 0;
}