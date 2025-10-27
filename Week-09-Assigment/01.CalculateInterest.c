#include<stdio.h>

float calculateInterest(float P,float R, float T)
{   
    float Interest = P*(R/100)*T;
    return Interest;
}
float updateBalance(float currentBalance ,float Interest)
{
    currentBalance= currentBalance + Interest;
    return currentBalance;
}

int main(){
    float principal=1000;
    float rate=10;
    float time=3;
    
    printf("Principal = $%.1f \nRate = %.1f \nTime = %.1f years \n",principal,rate,time);
    float I=calculateInterest(principal,rate,time);
    printf("Interest = %.2f",I);
    printf("\nCurrent Balance = %.2f \n",updateBalance(principal,I));
    return 0;

}