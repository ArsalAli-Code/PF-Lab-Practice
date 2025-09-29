#include <stdio.h>

int main() {
    int day;
    printf("Enter Day To Chose Your Dish:- \n\n 1. Monday\n 2. Tuesday\n 3. Wednesday\n 4. Thursday\n 5. Friday\n 6. Saturday\n 7. Sunday\n\n");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Your Monday Dinner is Biryani");
            break;
        case 2:
            printf("Your Tuesday Dinner is Sabzi");
            break;
        case 3:
            printf("Your Wednesday Dinner is Alo Gosht");
            break;
        case 4:
            printf("Your Thursday Dinner is KFC");
            break;
        case 5:
            printf("Your Friday Dinner is Dal Chawal");
            break;
        case 6:
            printf("Your Saturday Dinner is Pizza");
            break;
        case 7:
            printf("Your Sunday Dinner is Nihari");
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 7.");
    }

    return 0;
}

