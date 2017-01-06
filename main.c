#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter;
    printf("Enter any digit less than or equal to 10.\n");
    scanf("%d",&counter);

    for(counter = -1;counter < 11;counter++){
        printf("%d.\n", counter);
    }
    printf("Thank you for your cooperation");

    return 0;
}
