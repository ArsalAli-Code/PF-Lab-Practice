#include <stdio.h>
int main() {
    double bill;
    printf("Enter bill amount: ");
    scanf("%lf", &bill);
    
    if(bill > 5000)
        bill = bill - (bill * 0.10);
    printf("Final amount: %.2f", bill);
    return 0;
}