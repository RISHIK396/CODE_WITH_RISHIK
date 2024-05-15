#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>
using namespace std;


void prepare_adj_list(unordered_map<int,list<int>>&adj,vector<pair<int,int>>&edges){
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;

        // inserting elements into the aj unoredered map
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
void bfs(unordered_map<int,bool>&visited,unordered_map<int,list<int>>&adj,vector<int>&ans ,int node){
    // creating a queue
    queue<int>q;
    q.push(node);
    visited[node]=1;
    while(!q.empty()){
    //    inserting the top most element of queue into a variable
        int frontnode=q.front();
        // deleting the top most element
        q.pop();

        // now insertin the element int answer vector 
        ans.push_back(frontnode);

        // now acessing the neighbouring elments of each node
        for(auto i:adj[node]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}

vector<int>BFS(int vertex,vector<pair<int,int>>&edges){
    unordered_map<int,list<int>>adj;
    unordered_map<int,bool>visited;
    vector<int>ans;
    prepare_adj_list(adj,edges); 
    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            
            bfs(visited,adj,ans,i);
        }
    }
    return ans;
}