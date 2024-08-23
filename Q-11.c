#include <stdio.h>
void main()
{
    int x,y,z;
    printf("Enter x:- ");
    scanf("%d",&x);

    printf("Enter y:- ");
    scanf("%d",&y);

    printf("Enter z:- ");
    scanf("%d",&z);

    if(x<=y)
    {
        if(x<=z)
        {
            printf("x is min");
        }
        else{
            printf("z is min");
        }
    }
    if(y<=z)
    {
        printf("y is min");
    }
    else{
        printf("z is min");
    }
}