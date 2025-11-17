#include <stdio.h>

int main()
{
    FILE *fptr;
    char userdata[200];

    fptr = fopen("Error.txt", "w");
    fprintf(fptr, "Successfully Entered\n");
    fclose(fptr);

    fptr = fopen("Error.txt", "r");

    if (fptr == NULL)
    {
        printf("Error\n");
        return 1;
    }

    while (fgets(userdata, sizeof(userdata), fptr) != NULL)
        printf("%s", userdata);

    fclose(fptr);
    return 0;
}
