#include <bits/stdc++.h>
#include <vector>
using namespace std;


void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void bfs_tra(vector<int> adj[],int V)
{
	vector<bool> vis(V);

	for(int i=0;i<V;i++)
	{
		if(!vis[i]){
			queue<int> q;
			q.push(i);
			vis[i]=true;
			while(!q.empty()){
				int val=q.front();
				q.pop();
				cout<<val<<" ";
				for(int x:adj[val])
				{
					if(!vis[x])
					{
						vis[x]=true;
						q.push(x);
					}
				}
			}
		}
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    bfs_tra(adj, V);

	return 0;
}