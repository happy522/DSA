#include <bits/stdc++.h>
using namespace std;

bool checkCycle(int i, int n, vector<int> adj[], vector<int> &vis){

	queue<pair<int,int>> q;

	vis[i] = true;
	q.push({i,-1});

	while(!q.empty()){

		int node = q.front().first;
		int parent = q.front().second;
		q.pop();

		for(auto it : adj[node]){
			if(!vis[it]){
				vis[it] = true;
				q.push({it, node});
			}
			else if (parent != it)
				return true;
		}

	}
	return false;
}

bool isCycle(int n , vector<int> adj[]){
	vector<int> vis(n+1, 0);
	for(int i = 1; i<= n ; i++){
		if(!vis[i]){
			if(checkCycle(i, n, adj, vis))
				return true;
		}
	}
	return false;
}

int main(){

	int n,m;
	cin>>n>>m;

	vector<int> v[n+1];

	int i,x,y,j;
	for (i = 0; i < m; ++i){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	bool cycle = isCycle(n, v);
	if(cycle)
		cout << "Cyclic";
	else cout << "Acyclic";
	return 0;
}