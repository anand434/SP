#include <bits/stdc++.h>
using namespace std;
#define ll long long

// simply doing dfs to find cycle in the graph
ll u , v , n , m;
vector <ll> graph[10002];

bool dfs(vector <ll> graph[] , ll src){
    bool nodevisited[n+1];
    for(int i = 0; i < n+1; i++)
        nodevisited[i] = false;
    stack <ll> s;
    s.push(src);
    ll index , temp , check = 0;
    while(!s.empty()){
        check++;
        index = s.top();
        s.pop();
        if(nodevisited[index])
            return false;       // node is already visited
        else{
            nodevisited[index] = true;
            for(int i = 0; i < graph[index].size(); i++){
                temp = graph[index][i];
                s.push(temp);
            }
        }
    }
    if(check != n)  
        return false;
    else    
        return true;
}

int main(){
    cin >> n >> m;
    ll t = m;
    while(t--){
        cin >> u >> v;
        graph[u].push_back(v);
    }
    // dfs from node 1
    // no of nodes + 1 = no of edges
    if(dfs(graph,1) && m+1 == n)
        cout << "YES\n";
    else 
        cout << "NO\n";
    
    return 0;
}