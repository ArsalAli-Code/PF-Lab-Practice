#include<stdio.h>
int main()
{
	int num1,num2;
	FILE *Fptr;
	
	Fptr = fopen("Data.txt","w");
	printf("File Address is %p",Fptr);
	
	if(Fptr == NULL)
	{
		printf("\nError to open the file\n");
		return 1 ;
	}

	fprintf(Fptr,"--You just Created A File And Entered Data--\n");

	printf("\nEnter First Number: ");
	scanf("%d", &num1);
	fprintf(Fptr,"Enter First Number: %d\n",num1);
	
	printf("Enter Second Number: ");
	scanf("%d",&num2);
	fprintf(Fptr,"Enter First Number: %d\n",num2);

	fclose(Fptr);
	return 0;
}
