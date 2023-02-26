#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    if(x%2==0)y=x-1;
    else y=x;
    for(int i=1;i<=(x+1)/2;i++)
    {
        for(int j=1;j<=y;j++)
        {
            if(i==1&&j==(y+1)/2) printf("*");
            else if(i>1&&(j==(y+1)/2-(i-1)||j==(y+1)/2+(i-1))) printf("*");
            else printf("-");
        }
        printf("\n");
    }
    if(x%2==0)
    {
        for(int i=(x+1)/2;i>=1;i--)
        {
            for(int j=1;j<=y;j++)
            {
                if(i==1&&j==(y+1)/2) printf("*");
                else if(i>1&&(j==(y+1)/2-(i-1)||j==(y+1)/2+(i-1))) printf("*");
                else printf("-");
            }
            printf("\n");
        }
    }
    else
    {
        for(int i=(x+1)/2-1;i>=1;i--)
        {
            for(int j=1;j<=y;j++)
            {
                if(i==1&&j==(y+1)/2) printf("*");
                else if(i>1&&(j==(y+1)/2-(i-1)||j==(y+1)/2+(i-1))) printf("*");
                else printf("-");
            }
            printf("\n");
        }
    }
    return 0;
}
