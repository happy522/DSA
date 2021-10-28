#include <bits/stdc++.h>
using namespace std;

bool bipbfs( int i, int color[], vector<int> v[]){

	queue<int> q;
	q.push(i);
	color[i] = 1;
	while(!q.empty()){
		int node = q.front();
		q.pop();

		for(auto it : v[node]){

			if(color[it] == -1){
				color[it] = 1 - color[node];
				q.push(it);
			} 

			else if(color[it] == color[node])
				return false;
		}
	}
	return true;
}

bool isBipartite(int n, vector<int> v[]){
	int color[n];
	memset(color, -1, sizeof color);
	for(int i=0; i<n; i++){
		if(color[i] == -1){
			if(!bipbfs(i, color , v)){
				return false;
			}
		}
	}
	return true;
}

int main(){

	int n,m;
	cin>>n>>m;

	vector<int> v[n];

	int i,x,y,j;
	for (i = 0; i < m; ++i){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	if(isBipartite(n, v))
		cout << "Bipartite";
	else cout << "Not Bipartite";
	return 0;
}