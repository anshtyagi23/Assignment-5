#include<stdio.h>
//Ansh Tyagi IT 11912079
int main()
{
    int i,j,m=6;

    for(i=0;i<3;i++)
    {       for(j=0;j<20;j++)
            {
                printf("*");
            }
    printf("\n");
    }

    for(i=0;i<6;i++)
    {
        for(j=0;j<20;j++)
        {
            if((i+j<5) || (j>m))
            {
                printf("*");
            }
            else
            {
                printf("0");
            }
        }
    printf("\n");
    m++;
    }
    return 0;
}
