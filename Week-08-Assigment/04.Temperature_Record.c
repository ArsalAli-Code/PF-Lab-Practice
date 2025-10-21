#include <stdio.h>

int main() 
{
    int temp[7][3], i, j, avg;
    char shifts[3][20] = {"Morning", "Afternoon", "Night"};

    printf("Enter temperatures for 7 days");
    for(i = 0; i < 7; i++) 
    {
        printf("\nDay %d:\n", i + 1);
        for(j = 0; j < 3; j++) 
        {
            printf("  %s temperature: ", shifts[j]);
            scanf("%d", &temp[i][j]);
        }
    }

    printf("\nTemperature Record:\n");
    for(i = 0; i < 7; i++) 
    {
        printf("Day %d -> ", i + 1);
        for(j = 0; j < 3; j++) 
        {
            printf("%s: %d  ", shifts[j], temp[i][j]);
        }
        printf("\n");
    }

    printf("\nAverage temperature for each day:\n");
    for(i = 0; i < 7; i++) 
    {
        avg = (temp[i][0] + temp[i][1] + temp[i][2]) / 3;
        printf("Day %d: %d\n", i + 1, avg);
    }

    return 0;
}