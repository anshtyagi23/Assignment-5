#include<stdio.h>
//Ansh Tyagi IT 11912079
int main()
{
int x,y,c=0;
    for(x=0;x<3;x++)
    {
        for(y=0;y<20;y++)
    {
            printf("*");
    }
        printf("\n");
        if(c<2)
            {
                for(y=0;y<10;y++)
                    {
                        printf("*O");
                    }
                c++;
            }
    printf("\n");
    }
    return 0;
}
