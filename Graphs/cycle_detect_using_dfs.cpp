#include <bits/stdc++.h>
using namespace std;

bool cycledfs(int i, int parent, vector<int> v[], vector<int> &vis){
	vis[i] = true;
	for(auto it: v[i]){
		if(!vis[it]){
			if(cycledfs(it, i, v, vis))
				return true;
		}
		else if (it!= parent) return true;
	}
	return false;
}

bool isCycle(int n, vector<int> v[]){

	vector<int> vis(n+1, 0);

	for(int i = 1 ; i<=n; i++){
		if(!vis[i]){
			if(cycledfs(i, -1, v, vis))
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