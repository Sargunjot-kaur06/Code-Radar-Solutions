#include <stdio.h>
int main() {
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(c**2 == a**2 + b**2)
    printf("Valid");
    else
    printf("Invalid");
    return 0;
}