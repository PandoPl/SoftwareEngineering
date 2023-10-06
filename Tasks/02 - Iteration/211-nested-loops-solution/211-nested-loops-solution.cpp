#include <stdio.h>

int main()
{
    // Outer loop 
    for (int i = 1; i <= 12; i++)        // Outer loop executes twice
    {
        printf("\n(%d)\n", i);

        // Inner loop
        for (int j = 1; j <= 12; j++)    // Inner loop executes 5 times for each outer loop run so 10 time in total
        {
            printf("%d x %d = %d\n", j, i, i*j);  // note the use of the tab (\t) option at the start to improve the layout
        }
    }
}
