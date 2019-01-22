#include <stdio.h>

int main()
{
	int e=1,s=1,m=1;
	int E,S,M;
	scanf("%d %d %d",&E,&S,&M);
	for(int i=1; i<7981 ;i++)
	{
		if(e==E && s==S && m==M)
			{
			printf("%d\n", i);
			break;
		}
		else
		{
			e++;
			m++;
			s++;
			if(e>15) e=1;
			if(s>28) s=1;
			if(m>19) m=1;
		}
	}
}
