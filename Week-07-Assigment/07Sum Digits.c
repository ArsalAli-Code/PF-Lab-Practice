#include <stdio.h>

int main() 
{
    char text[100];
    int digits[100];
    int i = 0, j = 0, sum = 0;
    
    printf("Type Anything You Like\n");
    scanf("%[^\n]", text);
    
    while (text[i] != '\0') 
    {
        if (text[i] >= '0' && text[i] <= '9') 
        {
            digits[j] = text[i] - '0';
            sum += digits[j];
            j++;
        }
        i++;
    }
    
    printf("The Sum Of Digits you Entered Is %d", sum);
    return 0;
}
