#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Mark, Total, Count;
    float Avg;

    Total = 0;
    Count = 1;

    while (Count <=10)
    {
        printf("Enter mark: ");
        scanf("%d", &Mark);

        Total = Total + Mark;
        Count = Count + 1;
    }

    printf("Your total of marks is: %d ", Total);

    Avg = (float)Total / 10;

    printf("Your average marks is: %.2f ", Avg);

    if (Avg >= 50)
        printf("Pass!");
    else
        printf("Fail!");

    return 0;
}
