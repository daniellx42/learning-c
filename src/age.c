#include <stdio.h>

int main() {
    int age, new_age;

    printf("How old are you? ");
    scanf("%d", &age);
    
    new_age = age + 1;
    
    printf("you will be %d next year.\n", new_age);
}