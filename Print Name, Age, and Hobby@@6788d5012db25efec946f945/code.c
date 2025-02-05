#include <stdio.h>
int main() {
    int age;
    char name,hobby;
    scanf("%d",&age);
    scanf("%c%c",&name , &hobby);
    printf("Name: %c\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %c\n",hobby);
    return 0;
}