#include<stdio.h>
//Ansh Tyagi IT 11912079
int main()
{
    int i,x,y,m,c=0;

    for(i=0;i<3;i++)
    {
        for(x=0;x<20;x++)
        {
            printf("*");
        }
        printf("\n");

        if(c<2)
        {   for(y=0;y<4;y++)
            {   printf("%c",p);
                    for(m=0;m<4;m++)
                    {
                        printf("O");
                    }
            }
            printf("\n");
            c++;
        }
    }
    return 0;
}
