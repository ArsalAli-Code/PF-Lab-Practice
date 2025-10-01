#include <stdio.h>
int main() {
    int balance, amount;
    printf("Enter balance: ");
    scanf("%d", &balance);
    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);
    if(balance > amount && amount % 500 == 0)
        printf("Withdrawal Successful");
    else
        printf("Withdrawal Rejected");
    return 0;
}
