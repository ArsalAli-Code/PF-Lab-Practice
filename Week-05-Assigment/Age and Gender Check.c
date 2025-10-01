#include <stdio.h>
int main() {
    int age;
    char gender;
    printf("Enter age: ");
    scanf("%d", &age);
    
    printf("Enter gender (m/f): ");
    scanf(" %c", &gender);
    
    if (age >= 18) {
        if (gender == 'm')
            printf("Adult Male");
        else if (gender == 'f')
            printf("Adult Female");
        else
            printf("Invalid Gender");
    } else {
        printf("Minor");
    }
    return 0;
}