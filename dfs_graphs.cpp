#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
using namespace std;

// traversing each node in the graph with the help of level wise traversal
void dfs(int node,unordered_map<int,bool>&visited,unordered_map<int,list<int>>&adj,vector<int>&component){
    // putting the node in the arry for printing
    component.push_back(node);
    // marking the node as visited in the visited unoredered map
    visited[node]=1;

    for(auto i:adj[node]){
        if(!visited[i]){
            dfs(i,visited,adj,component);
        }

    }

}

vector<vector<int>>depth_first_search(int v,int e,vector<vector<int>>&edges){
    // prepare adj list
    unordered_map<int,list<int>>adj;
    for(int i=0;i<e;i++){
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    vector<vector<int>>ans;
    unordered_map<int,bool>visited;
    for(int i=0;i<v;i++){
        if(!visited[i]){
            vector<int>component;
            dfs(i,visited,adj,component);
            ans.push_back(component);
        }

    }
    return ans;
}

int main(){
    
}