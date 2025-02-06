#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if('A'<=ch && 'Z'>=ch){
        printf("Uppercase");
    }
    else if('a'<=ch && 'z'>=ch){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
    return 0;
}