#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj; 
    // creating an adjecency list with the help of an unordered map

    // adding edges
    void add_edge(int u, int v, bool direction)
    {
        adj[u].push_back(v); // if the graph is directed

        // if the graph i undirected
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    // printing the adjacency list
    void print_adj_list()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};


int main(){
    int n;
    graph g;
    cout<<"enter the number of edges you want in the graph: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int u,v;
        cout<<"enter the first vertex: "<<endl;
        cin>>u;
        cout<<"enter the second vertex: "<<endl;
        cin>>v;
        g.add_edge(u,v,0);
    }    
    g.print_adj_list();
    return 0;
}