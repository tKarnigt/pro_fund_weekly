#include <stdio.h>
int main()
{
    int x,i=1;
    scanf("%d",&x);
    do
    {
        printf("*");
        i--;
    }while(i<=x);
    return 0;
}
