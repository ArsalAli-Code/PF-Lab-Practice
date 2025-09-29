#include <stdio.h>
#include <string.h>
int main()
{
	int loggedIn = 0; 
	char DbName[10] = "admin";       
    char DbPassword[20] = "1234";    
    char Name[10];
    char Password[20];

    do 
	{
        printf("Enter Your Name : ");
        scanf("%s", Name);
        printf("Enter Your Password : ");
        scanf("%s", Password);

        if (strcmp(DbName, Name) == 0 && strcmp(DbPassword, Password) == 0) 
		{printf("Login Successful!\n");
            loggedIn = 1;}
		else 
		{printf("Invalid Credentials! Please enter again.\n");}
    } 
	while (!loggedIn);

    return 0;

}
