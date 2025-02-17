#include<stdio.h>
int main() {
    int a,b;
    char s;
    scanf("\n%d", &a);
    scanf("\n%d", &b);
    scanf("\n%c", &s);
    if(s == '+')
    {
        printf("%f", a + b);
    }
    else if(s == '-')
    {
        printf("%f", a - b);
    }
    else if(s == '*')
    {
        printf("%f", a * b);
    }
    else if(s == '/')
    {
        printf("%f", a / b);
    }
    else
    {
        printf("error");
    }
    return 0;
}