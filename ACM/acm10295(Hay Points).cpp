#include <stdio.h>
#include <string.h>

char w[1000][20];
int d[1000];
int n,m,i,j,k,sum;
char buf[1000];

void main()
{
	//freopen("in.txt","r",stdin);

	scanf("%d%d",&m,&n);

	for (i=0;i<m;i++) 
	{
		scanf(" %s %d",w[i],&d[i]);
        }
	
	for (i=0;i<n;i++) 
	{
		sum = 0;
		
		while (scanf(" %s",buf) && strcmp(buf,".")) 
		{
			for (j=0; j<m && strcmp(buf,w[j]); j++);

			if (j < m) sum += d[j];
		}
		printf("%d\n",sum);
	}
}