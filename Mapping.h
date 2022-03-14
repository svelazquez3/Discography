#include <iostream>
#include <vector> 


using namespace std; 
class Edge{
  Edge(); 

  void addEdge(vector<int> adj[], int u, int v); 
  void printGraph(vector<int> adj[], int V); 

  // void printEdges(); 
  private:
  int totalEdges; // Total number of edges found in graph
};
