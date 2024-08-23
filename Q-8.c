#include <stdio.h>
#define PI 3.14
int main()
{
    int r;
    float area;
    printf("Enter the r ");
    scanf("%d",&r);

    area = PI*r*r;
    printf("area of the circle is =%f",area);

}