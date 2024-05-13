#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int>& visited, vector<int> adj[]) {
    visited[node] = 1;
    cout << node << " "; // Print the current node
    for(int i = 0; i < adj[node].size(); i++) {
        if(visited[adj[node][i]] != 1) {
            dfs(adj[node][i], visited, adj);
        }
    }
}

int main() {
    int n = 6; // Assuming n is the number of nodes
    vector<int> adj[n];
    vector<int> visited(n, 0);
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(2);
    adj[2].push_back(0);
    adj[2].push_back(3);
    adj[3].push_back(3);
    cout << "DFS Traversal: ";
    dfs(2, visited, adj);
    cout << endl;
    return 0;
}
