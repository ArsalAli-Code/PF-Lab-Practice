#include <stdio.h>
int main() {
    double x,y;
    int choice;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);
    
    printf("1.Addition 2.Subtraction 3.Multiplication 4.Division\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1: printf("Result: %.2f", x+y); break;
        case 2: printf("Result: %.2f", x-y); break;
        case 3: printf("Result: %.2f", x*y); break;
        case 4: printf("Result: %.2f", x/y); break;
        default: printf("Invalid Choice");
    }
    return 0;
}
