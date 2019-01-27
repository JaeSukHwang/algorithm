#include <cstdio>

bool check[1001];
int next[1001];

void dfs(int x)
{
	check[x] = true;
	if (check[next[x]] == false)
	dfs(next[x]);
}

int main()
{
	int t, k, m, cnt;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &k);
		for(int i=1; i<=k; i++)
		{
			scanf("%d", &m);
			next[i] = m;
			check[i] = false;
		}
		for(int i=1; i<=k; i++)
		{
			if(check[i] == false)
			{
				dfs(i);
				cnt += 1;
			}
		}
	printf("%d\n", cnt);
	cnt = 0;
	}
	return 0;
}
