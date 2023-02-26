#include <stdio.h>
int main()
{
    int x,l=0;
    scanf("%d",&x);
    for(int i = 1;i<=x;i++)
    {
        for(int j = 1;j<=x*2-1;j++)
        {
            if(i==1&&j==x) printf("*");
            else if(i>1&&(j>=x-(i-1)&&j<=x+(i-1))) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
