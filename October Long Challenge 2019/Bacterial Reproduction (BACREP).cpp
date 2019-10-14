#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 500005

ll visited[MAX] = {0}, parent[MAX] = {0}, leaf[MAX] = {0};

void dfs(ll u, vector <vector <ll>> &ad)
{
	if(ad[u].size() == 1 && visited[ad[u][0]] == 1) leaf[u] = 1;
	visited[u] = 1;
	for(auto w : ad[u])
	{
		if(!visited[w])
		{
			parent[w] = u;
			dfs(w, ad);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll n, q;
	cin >> n >> q;
	vector <vector <ll>> adj(n + 1);
	adj[0].push_back(-1);
	for(ll i = 1; i < n; i++)
	{
		ll x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	dfs(1, adj);
	ll bacteria_count[n + 1];
	bacteria_count[0] = -1;
	for(ll i = 1; i <= n; i++) cin >> bacteria_count[i];
	while(q--)
	{
		ll temp_count[n + 1] = {0};
		for(ll i = 2; i <= n; i++)
		{
			if(leaf[i]) temp_count[i] = bacteria_count[i] + bacteria_count[parent[i]];
			else temp_count[i] = bacteria_count[parent[i]];
		}
		for(ll i = 0; i <= n; i++) bacteria_count[i] = temp_count[i];
		char query;
		cin >> query;
		if(query == '+')
		{
			ll v, k;
			cin >> v >> k;
			bacteria_count[v] += k;
		}
		else
		{
			ll v;
			cin >> v;
			cout << bacteria_count[v] << "\n";
		}
	}
	return 0;
}
