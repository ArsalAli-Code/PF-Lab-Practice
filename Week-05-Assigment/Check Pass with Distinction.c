#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    
    if (marks >= 50) {
        if (marks >= 85)
            printf("Passed with Distinction");
        else
            printf("Just Passed");
    } else {
        printf("Failed");
    }
    return 0;
}