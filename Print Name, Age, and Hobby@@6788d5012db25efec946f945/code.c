#include <stdio.h>
int main() {
int  age;
char name[100];
char hobby[100];
scanf("%c",name);
scanf("%d",age);
scanf("%c",hobby);
printf("Name: Age: Hobby: %c%d\n%c\n", name, age, hobby);
return 0;
}