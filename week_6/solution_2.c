#include <stdio.h>
int main ()
{
    char x[100000];
    scanf("%s",x);    
    char *px;
    int count=0;
    px = x;
    while(*px != '\0') { px++; count++; }
    while(count >= 0){ printf("%c",*px); px--; count--;}
}
