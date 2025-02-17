#include<stdio.h>
int main() {
    float a,b;
    char s;
    scanf("\n%f", &a);
    scanf("\n%f", &b);
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