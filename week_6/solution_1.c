#include <stdio.h>
#include <string.h>
int main ()
{
    char x[100000];
    scanf("%s",x);    
    for(int i = strlen(x);i>=0;i--)
    {
        printf("%c",x[i]);
    }
}
