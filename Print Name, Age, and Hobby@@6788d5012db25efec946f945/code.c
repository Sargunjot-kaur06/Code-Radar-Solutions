#include <stdio.h>
int main() {
int  age;
char name[100];
char hobby[100];
scanf("%s",&name);
scanf("%d",&age);
scanf("%s\n",&hobby);
printf("Name: %s",name);
printf("Age: %d\n",age);
printf("Hobby: %s\n",hobby);
return 0;
}