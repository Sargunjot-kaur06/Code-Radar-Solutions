#include<stdio.h>
int main() {
    int f,i,n;
    f = 0;
    for(i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        f = 1;
    }
    if(f == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}