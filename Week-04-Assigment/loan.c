#include <stdio.h>
int main() {
    int salary, age;
    printf("Enter salary: ");
    scanf("%d", &salary);
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    if(salary >= 40000 && age >= 25)
        printf("Loan Approved");
    else
        printf("Loan Rejected");
    return 0;
}
