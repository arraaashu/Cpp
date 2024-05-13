#include <bits/stdc++.h>
using namespace std;

void bfs(queue<int> &q, vector<int>adj[],vector<int> &visited)
{
    if(q.empty())
    return;
    int a = q.front();
    visited[a]=1;
    cout<<a;
    q.pop();
    for(int i=0;i<adj[a].size();i++)
    {
        if(visited[adj[a][i]]!=1)
        {
            q.push(adj[a][i]);
        visited[adj[a][i]]=1;
        }
    }
    bfs(q,adj,visited);
}
int main()
{
    queue<int>q;
    vector<int>adj[5];
    vector<int>visited(5,0);
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[1].push_back(4);
    adj[2].push_back(4);
    q.push(0);
    bfs(q,adj,visited);
    return 0;
}