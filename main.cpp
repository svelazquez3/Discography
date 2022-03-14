// C++ program that finds the fastest route from one vertices to another. 
#include <iostream> 
#include <vector> 
#include <bits/stdc++.h>

using namespace std;

void addEdge(vector <pair<int, int> > adj[], int u, int v, int wt); 
void printGraph(vector<pair<int,int> > adj[], int V);

int main()
{
	int V = 4;
	vector<pair<int, int> > adj[V];
	addEdge(adj, 1, 2, 20);
  addEdge(adj, 2, 3, 30);
	printGraph(adj, V);
	return 0;
}

// To add an edge
void addEdge(vector <pair<int, int> > adj[], int u,
									int v, int wt)
{
	adj[u].push_back(make_pair(v, wt));
	adj[v].push_back(make_pair(u, wt));
}

// Print adjacency list representation to graph
void printGraph(vector<pair<int,int> > adj[], int V)
{
  int start = 1; 
  int end = 3; 
  int total = 0; 
  
	int v, w; 
	for (int u = 1; u < V; u++)
	{
		cout << "Node " << u << " makes an edge with \n";
		for (auto it = adj[u].begin(); it!=adj[u].end(); it++)
		{
			v = it->first;
			w = it->second;
			cout << "\tNode " << v << " with edge weight = "
				<< w << "\n";

      if(v == start or v == end)
        total += w; 
		}
		cout << "\n";
	}
  cout << total; 
}

