#include<stdio.h>
int main() {
    float a,b;
    scanf("%f", &a);
    scanf("%f", &b);
    char s;
    scanf("%c", &s);
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