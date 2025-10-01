#include <stdio.h>
int main() {
    float m1, m2, m3, percentage;
    printf("Enter marks in 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);
    percentage = (m1 + m2 + m3) / 3;
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}
