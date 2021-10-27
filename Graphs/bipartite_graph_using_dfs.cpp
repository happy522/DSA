#include <bits/stdc++.h>
using namespace std;

bool bipdfs(int i, int color[], vector<int> v[]){
	if(color[i] == -1) color[i] = 1;

	for(auto node : v[i]){

		if(color[node] == -1){
			color[node] = 1 - color[i];
			if(!bipdfs(node, color, v))
				return false;

		}else if(color[node] == color[i]) return false;
	}
	return true;
}

bool isBipartite(int n, vector<int> v[]){
	int color[n];
	memset(color, -1, sizeof(color));
	for(int i=0; i<n; i++){
		if(color[i] == -1){
			if(!bipdfs(i, color , v)){
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
	bool cycle = isBipartite(n, v);
	if(cycle)
		cout << "Bipartite";
	else cout << "Not Bipartite";
	return 0;
}