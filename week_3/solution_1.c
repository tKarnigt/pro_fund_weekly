#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x+y>y+z&&x+y>x+z)
    {
        printf("%d, %d",x,y);
    }
    else if(z+y>y+x&&z+y>x+z)
    {
        printf("%d, %d",y,z);
    }
    else
    {
        printf("%d, %d",x,z);
    }
    return 0;
}
