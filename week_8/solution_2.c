#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkscore (char* pw)
{
    int score[5] = {0,0,0,0,0};
    for (int i = 0; i<strlen(pw) ; i++)
    {
        if (islower(pw[i]))
        {
            score[0] = 1;
        }
        if (isdigit(pw[i]))
        {
            score[1] = 1;
        }
        if (isupper(pw[i]))
        {
            score[2] = 1;
        }
        if (pw[i]=='$'||pw[i]=='#'||pw[i]=='@')
        {
            score[3] = 1;
        }
    }
    if (strlen(pw)>=6 && strlen(pw)<=12 )
    {
        score[4] = 1;
    }
    
    return score[0]+score[1]+score[2]+score[3]+score[4];
}

int main()
{
    char kob [20];
    char romtham [20];    
    char jojo [20];
    scanf("%[^,],%[^,],%[^\n]",kob,romtham,jojo);
    int kobscore = checkscore(kob);
    int romthamscore = checkscore(romtham);
    int jojoscore = checkscore(jojo);
    int result[3] = {kobscore,romthamscore,jojoscore};
    int max = 0;
    for (int i = 1; i < 3; i++)
    {
        if (result[i] > result[max])
        {
            max = i;
        }
    }
    switch (max)
    {
    case 0:
        printf("%s (kob)",kob);
        break;
    
    case 1:
        printf("%s (romtham)",romtham);
        break;

    case 2:
        printf("%s (jojo)",jojo);
        break;    

    default:
        break;
    }
    return 0;
}
