#include <stdio.h>

int main() {
    int marks[10];
    int sum = 0;
    int i;
    float avg;

    printf("Enter marks of 10 students:\n");
    
    for (i = 0; i < 10; i++) 
	{
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
    }

    avg = sum / 10.0;
    printf("Average marks = %.1f\n", avg);

    return 0;
}
