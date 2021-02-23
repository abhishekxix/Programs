#include <iostream> 
#include <vector>
#include <cstdlib>

  
class Graph { 
  
    int v; 
  
    int e; 
  
    int** adjacency_matrix; 
  
public: 
   
    Graph(int vertices, int edges); 
  

    void addEdge(int start_node, int edge); 
  
   
    void DFS(int start_node, std::vector<bool>& visited_nodes); 
    void BFS(int start_node);
}; 
 
Graph::Graph(int v, int e) 
{ 
    this->v = v; 
    this->e = e; 
    adjacency_matrix = new int*[v]; 
    for (int row = 0; row < v; row++) { 
        adjacency_matrix[row] = new int[v]; 
        for (int column = 0; column < v; column++) { 
            adjacency_matrix[row][column] = 0; 
        } 
    } 
} 
 
void Graph::addEdge(int start, int e) 
{ 
    adjacency_matrix[start][e] = 1; 
}

void Graph::DFS(int start_node, std::vector<bool>& visited_nodes) 
{ 
    std::cout << start_node << " "; 
  
    visited_nodes[start_node] = true; 
  
    for (int i = 0; i < v; i++) { 
  
        if (adjacency_matrix[start_node][i] == 1 && (!visited_nodes[i])) { 
            DFS(i, visited_nodes); 
        } 
    } 
} 

void Graph::BFS(int start_node) 
{  
    std::vector<bool> visited(v, false); 
    std::vector<int> q; 
    q.push_back(start_node); 
  
    visited[start_node] = true; 
  
    int vis; 
    while (!q.empty()) { 
        vis = q[0]; 
  
        std::cout << vis << " "; 
        q.erase(q.begin()); 
  
        for (int i = 0; i < v; i++) { 
            if (adjacency_matrix[vis][i] == 1 && (!visited[i])) { 
  
                q.push_back(i); 
  
                visited[i] = true; 
            } 
        } 
    } 
} 
   
int main() 
{ 
    int v = 6, e = 6; 
  
     
    Graph G(v, e); 
    G.addEdge(0, 1); 
    G.addEdge(0, 2); 
    G.addEdge(0, 3); 
    G.addEdge(4, 0);
    G.addEdge(4, 3);
    G.addEdge(4, 5);
  
  
   
    std::vector<bool> visited_nodes(v, false); 
  
    std::cout << "Using DFS :: (adjacent nodes of 0)\n";
    G.DFS(0, visited_nodes); 
    std::cout << "\nUsing BFS (adjacent nodes of 4):: \n";
    G.BFS(4);

    return 0;
} 