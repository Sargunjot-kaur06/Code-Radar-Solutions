#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a&b);
    if(a >= 18 && b == 1)
    {
        printf("Eligible");
    }
    else
    {
        printf("Non Eligible");
    }
    return 0;
}