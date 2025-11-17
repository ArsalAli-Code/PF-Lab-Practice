#include<stdio.h>
int main()
{
	char Filename[100];
	char Username[100];
	FILE *NewFile;
	
	printf("Enter File Name: ");
	scanf("%s",Filename);
	NewFile = fopen(Filename,"w");
	
	if(NewFile == NULL)
	{
		printf("\nError to open the file\n");
		return 1 ;
	}
	
	printf("Enter User Name: ");
	getchar();
	fprintf(NewFile,"Successfully Created The File %s.\n",Filename);	
	
	fgets(Username,sizeof(Username),stdin);
	fprintf(NewFile,"The User Name is %s.",Username);	
	
	
	fclose(NewFile);
	return 0;

}
