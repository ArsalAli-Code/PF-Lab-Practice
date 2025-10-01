#include <stdio.h>
int main() {
    int continent, country;
    printf("Select Continent (1=Asia, 2=Europe): ");
    scanf("%d", &continent);
    switch (continent) {
        case 1:
            printf("Select Country (1=Pakistan, 2=India): ");
            scanf("%d", &country);
            switch (country) {
                case 1: printf("Pakistan"); break;
                case 2: printf("India"); break;
                default: printf("Invalid Asian Country");
            }
            break;
        case 2:
            printf("Select Country (1=France, 2=Germany): ");
            scanf("%d", &country);
            switch (country) {
                case 1: printf("France"); break;
                case 2: printf("Germany"); break;
                default: printf("Invalid European Country");
            }
            break;
        default: printf("Invalid Continent");
    }
    return 0;
}
