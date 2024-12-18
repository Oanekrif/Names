#include <stdio.h>
#include <string.h>

#define MAX_NAMES 10
#define MAX_LENGTH 10

int main()
{
    char names[MAX_NAMES][MAX_LENGTH];
    int nameCount;

    printf("Enter the names (enter 'exit' or '-1' or '0' to stop):\n");
    nameCount = 0;
    for (int i = 0; i < MAX_NAMES; ++i)
    {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
        
        if (strcmp(names[i], "exit") == 0 || strcmp(names[i], "0") == 0 || strcmp(names[i],"-1") == 0)
        {
            break;
        }

        nameCount++;
    }

    printf("\nEntered names: ");
    for (int i = 0; i < nameCount; ++i)
    {
        printf("%s", names[i]);
        if(i+1 != nameCount)
            printf(", ");
        else
            printf(".");
    }

    return 0;
}
