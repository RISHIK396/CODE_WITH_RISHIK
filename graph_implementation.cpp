#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template<typename t>

class graph{
    public:
    // creating an adjacency list
    unordered_map<t,list<t>>adj;
    
    // adding an edge in the 
    void add_edge(t u,t v,bool direction){
        // adding the first edge
        adj[u].push_back(v);

        // if the direction is 0 then undirected graph
        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void print_edge(){
        // creating an iterator for accessing each value pair of the unordered_map or adjecency list
        for(auto i:adj){
            // printing the key of the unoredered map i.e the node
            cout<<i.first<<"->";
            // for printing all the neighbours of the key node
            for(auto j:i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};

int main(){
    // gettin the number of edges to be entered by the user
    int m;
    cout<<"enter the number of edges you want in the graph"<<endl;
    cin>>m;
    // making an object of the class graph
    graph<int>g;
    
    for(int i=0;i<m;i++){
        int u,v;
        cout<<"enter the parent node: "<<endl;
        cin>>u;
        cout<<"enter the neighbouring node: "<<endl;
        cin>>v;
        char direction;
        cout<<"enter whether you want to get a directed graph in y or n: "<<endl;
        cin>>direction;
        // getting the values added in the key value pair
        if(direction=='y'){
            g.add_edge(u,v,1);
        }
        else{
            g.add_edge(u,v,0);
        }    
    }

    // printing the graph
    g.print_edge();
    return 0;
}