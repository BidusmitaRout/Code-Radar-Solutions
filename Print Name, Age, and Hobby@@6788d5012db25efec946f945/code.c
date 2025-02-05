#include <stdio.h>
int main() {
    int age;
    char name,hobby;
    scanf("%d",&age);
    scanf("%s",&name);
    scanf("%s", &hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}