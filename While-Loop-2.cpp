#include <stdio.h>
int main()
{
int balance;
int withdraw;

printf("Enter Amount To balance : ");
scanf("%d", &balance);

printf("Enter Amount To Withdraw : ");
scanf("%d", &withdraw);


while (withdraw > balance) {
    printf("Insufficient Balance try again! ");
    scanf("%d", &withdraw);
}
balance -= withdraw;
printf("transaction success! Your Remaining balance: %d", balance);
}
