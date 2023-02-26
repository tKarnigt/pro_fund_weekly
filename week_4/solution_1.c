#include <stdio.h>
int main()
{
    int x,i=1;
    scanf("%d",&x);
    while(i<=x)
    {
        for(int j=1;j<=x;j++)printf("*");
        printf("\n");
        i++;
    }
    return 0;
}
