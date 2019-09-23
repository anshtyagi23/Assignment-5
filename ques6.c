#include<stdio.h>
//Ansh Tyagi IT 11912079
int main()
{
    int i,x,y;

    for(i=0;i<2;i++)
    {
        for(x=0;x<4;x++)
        {
            printf("O");
                for(y=0;y<4;y++)
                {
                    printf("*");
                }
        }
        printf("\n");

          for(x=0;x<4;x++)
        {
            printf("*");
                for(y=0;y<4;y++)
                {
                    printf("O");
                }
        }
        printf("\n");
    }
    return 0;
}
