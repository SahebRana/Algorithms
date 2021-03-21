#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> adj[100];
bool visited[100];
int p[100];
int dist[100];

int bfspath(int s, int t, int n){
    for(int i = 0; i < n; i++) visited[i] = false;

    queue<int> Q;
    Q.push(s);
    visited[s] = true;
    p[s] = s;

    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        for(int i = 0; i < adj[u].size(); i++)
        if(visited[adj[u][i]] == false){
            int v = adj[u][i];
            visited[v] = true;
            dist[v] = dist[u] + 1;
            p[v] = u;
            Q.push(v);
        }
    }

    return dist[t];
}
void print_path(int s, int t){
    vector<int> path;
    path.push_back(t);
    int now = t;
    while(now != s){
        now = p[now];
        path.push_back(now);
    }

    int length = path.size();

    for(int i = length - 1; i >= 0; i-- )
        cout << path[i] << " ";
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

	cout << bfspath(0, 2, 4) << endl;
	print_path(0, 2);

	return 0;
}
