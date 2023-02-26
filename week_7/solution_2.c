#include<stdio.h>
int main()
{
    int x;
    scanf_s("%d", &x);
    if (x % 2 == 1)
    {
        for (int i = 1; i <= (x - 1) / 2; i++)
        {
            for (int j = 1; j <= ((x - 1) / 2) - i + 1; j++)printf("-");
            printf("*");
            for (int j = 1; j < 2 * i - 2; j++)printf("-");
            if (i != 1)printf("*");
            for (int j = 1; j <= ((x - 1) / 2) - i + 1; j++)printf("-");
            printf("\n");
        }
        for (int i = 1; i <= x; i++)
        {
            if (i == 1 || i == x) { printf("*"); }
            else { printf("-"); }
        }
        printf("\n");
        for (int i = 1; i <= (x - 1) / 2; i++)
        {
            for (int j = 1; j <= i; j++)printf("-");
            printf("*");
            for (int j = 1; j <= -2 * i + x - 2; j++)printf("-");
            if (i != (x / 2))printf("*");
            for (int j = 1; j <= i; j++)printf("-");
            printf("\n");
        }
    }
    else
    {
        for (int i = 1; i <= x / 2; i++)
        {
            for (int j = 1; j <= ((x - 1) / 2) - i + 1; j++)printf("-");
            printf("*");
            for (int j = 1; j < 2 * i - 2; j++)printf("-");
            if (i != 1)printf("*");
            for (int j = 1; j <= ((x - 1) / 2) - i + 1; j++)printf("-");
            printf("\n");
        }
        for (int i = 1; i <= x-1; i++)
        {
            if (i == 1 || i == x-1) { printf("*"); }
            else { printf("-"); }
        }
        printf("\n");
        for (int i = 1; i <= (x / 2)-1; i++)
        {
            for (int j = 1; j <= i; j++)printf("-");
            printf("*");
            for (int j = 1; j <= x + (-2*i)-3; j++)printf("-");
            if (i != (x / 2)-1)printf("*");
            for (int j = 1; j <= i; j++)printf("-");
            printf("\n");
        }
    }
}
