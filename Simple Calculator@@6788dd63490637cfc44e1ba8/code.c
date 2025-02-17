#include<stdio.h>
int main() {
    int a,b;
    char s;
    scanf("%d", &a);
    scanf("\n%d", &b);
    scanf("\n%c", &s);
    if(s == '+')
    {
        printf("%d", a + b);
    }
    else if(s == '-')
    {
        printf("%d", a - b);
    }
    else if(s == '*')
    {
        printf("%d", a * b);
    }
    else if (s == '/') {
        if (b != 0) {  
            printf("%d", a / b);
        } else {
            printf("Error: Division by zero");
        }
    }
    else
    {
        printf("error");
    }
    return 0;
}