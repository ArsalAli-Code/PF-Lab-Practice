#include <stdio.h>

int main() {
    int employeeIDs[12];
    int search = 0;
	int found = 0;

    printf("Enter 12 Employee IDs\n\n");
    for (int i = 0; i < 12; i++) {
        printf("Employee %d ID: ", i + 1);
        scanf("%d", &employeeIDs[i]);}

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &search);

    for (int i = 0; i < 12; i++){
		if (employeeIDs[i] == search) {
            found = 1;
            break;}}

    if (found)
        {printf("Employee ID %d exists in the array.\n", search);}
    else
        {printf("Employee ID %d does NOT exist in the array.\n", search);}

    return 0;
}
