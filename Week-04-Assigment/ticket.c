#include <stdio.h>
int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    
    if(age < 12)
        printf("Ticket Price: 200");
    else if(age < 18)
        printf("Ticket Price: 300");
    else if(age <= 60)
        printf("Ticket Price: 500");
    else
        printf("Ticket Price: 250");
    return 0;
}
