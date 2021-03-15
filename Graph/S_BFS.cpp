#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> adj[100];
bool visited[100];

void bfs(int s, int n){
    for(int i = 0; i < n; i++) visited[i] = false;

    queue<int> Q;
    Q.push(s);
    visited[s] = true;

    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        cout << u << " ";
        for(int i = 0; i < adj[u].size(); i++)
        if(visited[adj[u][i]] == false){
            int v = adj[u][i];
            visited[v] = true;
            Q.push(v);
        }
    }
}


void addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}

int main()
{
	// Create a graph given in the above diagram

	addEdge(0, 1);
	addEdge(0, 2);
	addEdge(1, 2);
	addEdge(2, 0);
	addEdge(2, 3);
	addEdge(3, 3);

	cout << "Following is Breadth First Traversal "
		<< "(starting from vertex 2) \n";
	bfs(3, 4);

	return 0;
}
