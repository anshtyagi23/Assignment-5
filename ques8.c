#include<stdio.h>
//Ansh Tyagi IT 11912079
int main()
{
    int x,y;
    for(x=0;x<10;x++)
    {
        for(y=0;y<20;y++)
        {
            if(x+y<6 || (y>11 && x<8))
            {
                printf("0");
            }
            else
            {
                printf("*");
            }
        }
    printf("\n");
    }
    return 0;
}
