#include <stdio.h>

int main() {
    int ages[8];
	int youngest;
	int i;
    
    printf("Enter the ages of 8 participants: \n");
    for (i = 0; i < 8; i++) 
	{scanf("%d", &ages[i]);}

    youngest = ages[0];  
    for (i = 1; i < 8; i++) 
	{
		if (ages[i] < youngest) 
		{youngest = ages[i];}
    }

    printf("The youngest participant's age is: %d\n", youngest);
    return 0;
}

