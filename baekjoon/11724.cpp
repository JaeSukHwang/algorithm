#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> a[1001];
bool check[1001];

void dfs(int node)
{
	check[node] = true;
	for(int i=0; i<a[node].size(); i++) {
		int next = a[node][i];
		if(check[next] == false)
		{
			dfs(next);
		}
	}
}


int main()
{
	int n, m, u ,v, cnt;
	cnt = 0;
	scanf("%d %d", &n, &m);
	for(int i=0; i<m ;i++)
	{
		scanf("%d %d", &u, &v);
		a[u].push_back(v);
		a[v].push_back(u); 
	}
	for(int i=1; i<=n ;i++)
	{
		if(check[i] == false)
		{
			dfs(i);
			cnt = cnt+1;
		}
	}
	printf("%d\n", cnt); 
	return 0;
}
