#include <stdio.h>
#include <string.h>

int clause(char* x)
{
	int c[5]={0,0,0,0,0},count=0;
	for(int i=0;i<20;i++)
	{
		if(x[i] >= 'a' && x[i] <= 'z') c[0] = 1;
		if(x[i] >= 'A' && x[i] <= 'Z') c[1] = 1;
		if(x[i] >= '0' && x[i] <= '9') c[2] = 1;
		if(x[i] == '$' || x[i] == '#' || x[i] =='@') c[3] = 1;
		if(strlen(x)>=6&&strlen(x)<=12) c[4] = 1;
	}
    for (int i=0;i<5;i++)
    {
        if(c[i]==1) count++;
    }
	return count;
}
int main()
{
	char name1[20],name2[20],name3[20];
	scanf("%[^,], %[^,], %[^\n]",&name1,&name2,&name3);
	int kobscore = clause(name1);
    int romscore = clause(name2);
    int jojoscore = clause(name3);

	if(kobscore >= romscore && kobscore >= jojoscore) printf("%s (Kob)",name1);
	else if(romscore > kobscore && romscore >= jojoscore) printf("%s (Romtham)",name2);
	else printf("%s (Jojo)",name3);
	return 0;
}
