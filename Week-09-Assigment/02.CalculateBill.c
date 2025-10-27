#include <stdio.h>

float calculateTotal(float PriceInCart[], int Size)
{   
    float Sum = 0;
    for (int i = 0; i < Size; i++) {
        Sum += PriceInCart[i];
    }
    printf("\nThe total price in cart before discount is $%.2f\n", Sum);
    return Sum;
}

float applyDiscount(float Total)
{
    if (Total > 5000) {
        float Discount = Total * 0.10;    // 10% discount
        Total = Total - Discount;
        printf("Discount applied: $%.2f\n", Discount);
        printf("Total after discount: $%.2f\n", Total);
    } else {
        printf("Sorry, you are not eligible for a discount.\n");
    }
    return Total;
}

void printBill(float Total)
{
    printf("FINAL BILL AMOUNT: $%.2f\n", Total);
}

int main()
{
    float Cart[] = {1000, 1000, 1000, 1000, 1000, 1000};
    int Size = sizeof(Cart) / sizeof(Cart[0]);

    float T = calculateTotal(Cart, Size);
    float NT = applyDiscount(T);
    printBill(NT);
    
    return 0;
}
