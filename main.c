#include <stdio.h>
#include <stdlib.h>

int main()
{
    int byear,age;
    printf("Enter your birth year");
    scanf("%d",&byear);

    age=2019-byear;

    printf("Hi,your age is %d\n",age);
    return 0;
}
