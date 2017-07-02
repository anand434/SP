// implement double BFS or single DFS
// SPOJ problem

#include <bits/stdc++.h>
using namespace std;

int n, k , u , v;
vector <int> graph[10001];
int visited[10001];
int ans;

int dfs(vector <int> graph[] , int src){
    int m = 0, m1 = 0;
    int temp = INT_MIN;
    visited[src] = 1;
    for(int i = 0 ; i < graph[src].size(); ++i){
        if(!visited[graph[src][i]]){
            temp = dfs(graph, graph[src][i]);
            if(temp >= m){
                m1 = m;
                m = temp;
            }
            else if(temp > m1)
                m1 = temp;
        }
    }
    ans = max(ans , m+m1);
    return m+1;
}

int main(){
    cin >> n;
    k = n-1;
    while(k--){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(graph , 1);
    cout << ans;
    return 0;
}
