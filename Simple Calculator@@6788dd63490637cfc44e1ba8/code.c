#include<stdio.h>
int main() {
    float a,b;
    char s;
    scanf("%f", &a);
    scanf("%f", &b);
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
    if (b != 0) {  
            printf("%f", a / b);
        } else {
            printf("eeror");
        }
    else
    {
        printf("error");
    }
    return 0;
}