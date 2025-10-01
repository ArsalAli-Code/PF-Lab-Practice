#include <stdio.h>
#include <string.h>
int main() {
    char pass[20];
    printf("Enter password: ");
    scanf("%s", pass);
    
    if(strcmp(pass, "1234") == 0)
        printf("Access Granted");
    else
        printf("Access Denied");
    return 0;
}