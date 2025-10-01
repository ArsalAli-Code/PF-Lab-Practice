#include <stdio.h>
int main() {
    int device, brand;
    printf("Select device (1=Phone, 2=Laptop): ");
    scanf("%d", &device);
    switch (device) {
        case 1:
            printf("Select brand (1=Samsung, 2=Apple): ");
            scanf("%d", &brand);
            switch (brand) {
                case 1: printf("Phone - Samsung"); break;
                case 2: printf("Phone - Apple"); break;
                default: printf("Invalid Phone Brand");
            }
            break;
        case 2:
            printf("Select brand (1=Dell, 2=HP): ");
            scanf("%d", &brand);
            switch (brand) {
                case 1: printf("Laptop - Dell"); break;
                case 2: printf("Laptop - HP"); break;
                default: printf("Invalid Laptop Brand");
            }
            break;
        default: printf("Invalid Device");
    }
    return 0;
}
