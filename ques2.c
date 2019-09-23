#include<stdio.h>
//Ansh Tyagi IT 11912079
int main()
{
    int a,b,i;
    for(i=0;i<3;i++)
    {
    for(a=0;a<8;a++)
    {
    printf("O");
    }
        for(b=0;b<12;b++)
        {
        printf("*");
        }
        printf("\n");

    }
    for(i=0;i<4;i++)
        {
            for(a=0;a<20;a++)
            {
                printf("*");
            }
        printf("\n");
        }
    for(i=0;i<3;i++)
    {
        for(b=0;b<15;b++)
        {
        printf("*");
        }
        for(a=0;a<5;a++)
        {
        printf("O");
        }
        printf("\n");

    }
return 0;
}
