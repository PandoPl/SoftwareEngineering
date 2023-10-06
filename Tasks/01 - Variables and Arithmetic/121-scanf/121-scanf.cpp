#include <stdio.h>

int main()
{
    //Create a variable x
    int x = 0;
    int c = 0;
    //Prompt user
    printf("Enter your age\n");

    //Read keyboard response - look for an integer
    int found = scanf_s("%d", &x);
    scanf_s("%d", &c);
    //Display how many items were matched
    printf("Matched %d items\n", found);

    //Display what was typed in
    printf("x = %d\nc = %d\n", x, c);
    double average = ((double)c + (double)x) / 2;
    printf("average of %d and %d is equal to %.1f\n", x, c, average);
}


