#include <iostream>
#include <vector> 
#include "Mapping.h"

using namespace std; 

Edge::Edge()
{
  totalEdges = 0; 
}

void Edge:: addEdge(vector<int> adj[], int u, int v) // Adding edge to graph 
{ 
  adj[u].push_back(v);
  adj[v].push_back(u);
}

 void Edge:: printGraph(vector<int> adj[], int V) // Print entire graph 
{ 
  for (int v = 0; v < V; ++v) {
        cout << "\n Adjacency list of vertex " << v
             << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        printf("\n");
    }
}
