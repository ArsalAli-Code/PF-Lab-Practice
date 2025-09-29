#include <stdio.h>
int main()
{
    int A , i = 1;
    printf("Enter A Number : ");
    scanf("%d", &A);

    while (i <= 10)   
    {
		printf("%d   x   %d  =  %d\n", i, A, i * A);
    	i++;
	}
	
return 0;
}

