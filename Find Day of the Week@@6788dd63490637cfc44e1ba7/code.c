#include <stdio.h>
int main() {
    float a;
    scanf("%f",&a);
    if(a == 1)
    {
        printf("Monday");
    }
    Else if(a == 2)
    {
        printf("Tuesday");
    }
    Else if(a == 3) 
    {
        printf("Wednesday");
    }
    Else if(a == 4)
    {
        printf("Thursday");
    }
    Else if(a == 5)
    {
        printf("Friday");
    }
    Else if(a == 6)
    {
        printf("Saturday");
    }
    Else if(a == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}