#include <stdio.h>
int main() {
int  age;
char name[100];
char hobby[100];
scanf("%s",&name);
scanf("%d",&age);
scanf("%s\n",&hobby);
printf("Name: Age: Hobby: %s%d\n%s\n", name, age, hobby);
return 0;
}