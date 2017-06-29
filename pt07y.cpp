#include <bits/stdc++.h>
using namespace std;

void dfs (vector < list <int> > graph , int src){
    vector <bool> visited(graph.size(), false);
    stack <int> s;
    s.push(src);
    visited[src] = true;
    while(!s.empty()){
        int vertex = s.top();
        s.pop();
        cout << vertex << "  ";
        for(list <int> :: iterator it = graph[vertex].begin(); it != graph[vertex].end(); it++){
            if(!visited[*it]){
                s.push(*it);
                visited[*it] = true;
            }
        }
    }
}

int main(){
    vector < list <int> > graph;
    int v , e , src , des;
    cin >> v >> e;
    graph.resize(v);
    while(e--){
        cin >> src >> des;
        graph[src].push_back(des);
        graph[des].push_back(src);
    }
    cin >> src;
    dfs(graph, src);
    return 0;
}