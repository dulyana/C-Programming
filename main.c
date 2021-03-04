#include <stdio.h>
#include <stdlib.h>

int main()
{
    int itemnumber,qty;
    printf("Enter itemnumber,qty\n");
    scanf("%d",& itemnumber,&qty);
    char des[30];
    printf("Enter the des\n");
    scanf("%s",&des);

    float price,totalprice;
    printf("Enter the price,totalprice\n");
    scanf("%2f",&price,&totalprice);

    printf("item number of %d des%s totalprice%2f\n",itemnumber,des,totalprice);
    return 0;
}
