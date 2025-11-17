#include<stdio.h>

int fact(int num)
{
	if(num == 1 || num ==0)
		return 1;
	else
		return num*fact(num-1);
}

int main()
{
	int Num;
	printf("Enter A Number: ");
	scanf("%d",&Num);
	printf("Your Factoral is %d",fact(Num));
	
	return 0;
}
