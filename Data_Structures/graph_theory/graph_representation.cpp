#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <stack>

/**
 * This is the implementation of a simple undirected graph using the adjacency list method.
 * It uses an unordered_map to store the vertices and edges.
**/

class pair_hash {
    public:
        std::size_t operator() (const std::pair<int, int> &a) const {
            return std::hash<int> {}(a.first) ^ std::hash<int> {}(a.second);
        }
};


class al_graph {

    friend void dfs(al_graph &g);

    private:
    
        std::unordered_map<int, std::vector<int>> adjacency_list;
        std::unordered_set<std::pair<int, int>, pair_hash> edge_set;
        std::unordered_set<int> vertex_set;
        std::vector<std::unordered_set<int>> components;

        void explore(int vertex, std::unordered_set<int> &visited) const {
            std::stack<std::pair<int, int>> postponed {};
            
            if(vertex_set.find(vertex) != vertex_set.end()) {
                int i = 0;
                do {
                    
                    while(i < adjacency_list.at(vertex).size()) {
                        visited.insert(vertex);
                        if(visited.find(adjacency_list.at(vertex).at(i)) == visited.end()) {
                            postponed.push(std::make_pair(vertex, i));
                            vertex = adjacency_list.at(vertex).at(i);
                            i = 0;
                        } else {
                            i++;
                        }                        
                    }
                    
                    
                    while(i == adjacency_list.at(vertex).size() && !postponed.empty()) {
                        std::cout << vertex << ' ';
                        vertex = postponed.top().first;
                        i = postponed.top().second + 1;
                        postponed.pop();
                        if(postponed.empty()) {
                            std::cout << vertex << ' ' << std::flush;   //this prints the last vertex.
                        }
                    }
                    
                } while(!postponed.empty());
                
            }
        }

        void explore_components(int vertex, std::unordered_set<int> &visited) {
            std::stack<std::pair<int, int>> postponed {};
            std::unordered_set<int> component {};
            
            if(vertex_set.find(vertex) != vertex_set.end()) {
                int i = 0;
                do {
                    
                    while(i < adjacency_list.at(vertex).size()) {
                        visited.insert(vertex);
                        if(visited.find(adjacency_list.at(vertex).at(i)) == visited.end()) {
                            postponed.push(std::make_pair(vertex, i));
                            vertex = adjacency_list.at(vertex).at(i);
                            i = 0;
                        } else {
                            i++;
                        }                        
                    }
                    
                    
                    while(i == adjacency_list.at(vertex).size() && !postponed.empty()) {
                        component.insert(vertex);
                        vertex = postponed.top().first;
                        i = postponed.top().second + 1;
                        postponed.pop();
                        if(postponed.empty()) {
                            component.insert(vertex);
                        }
                    }
                    
                } while(!postponed.empty());
                components.push_back(component);
            }
        }

    public:

        al_graph() 
            : adjacency_list {}, edge_set {}, vertex_set {}, components {} {

        }
        al_graph(std::vector<int> &vertices)
            : adjacency_list {}, edge_set {}, vertex_set {} {
            for(auto &i : vertices) {
                adjacency_list.insert(std::make_pair(i, std::vector<int> {}));
                vertex_set.insert(i);
            }
        }

        void add_vertex(int vertex) {
            if(adjacency_list.find(vertex) == adjacency_list.end()) {
                adjacency_list.insert(std::make_pair(vertex, std::vector<int> {}));
                vertex_set.insert(vertex);
            }
        }

        void add_edge(int vertex1, int vertex2) {
            if(edge_set.find(std::pair<int, int> (vertex1, vertex2)) == edge_set.end() 
                && edge_set.find(std::pair<int, int> (vertex2, vertex1)) == edge_set.end()) {

                if(adjacency_list.find(vertex1) != adjacency_list.end() 
                    && adjacency_list.find(vertex2) != adjacency_list.end()) {   //both vertices are present in the graph.
                    
                    adjacency_list.at(vertex1).push_back(vertex2);
                    adjacency_list.at(vertex2).push_back(vertex1);

                } else if(adjacency_list.find(vertex1) == adjacency_list.end() 
                    && adjacency_list.find(vertex2) == adjacency_list.end()) {    //none of the vertices is present in the graph.
                    
                    adjacency_list.insert(std::make_pair(vertex1, std::vector<int> {vertex2}));
                    adjacency_list.insert(std::make_pair(vertex2, std::vector<int> {vertex1}));
                    vertex_set.insert(vertex1);
                    vertex_set.insert(vertex2);
                
                } else if(adjacency_list.find(vertex1) == adjacency_list.end()) {   //vertex2 is present in the graph but vertex1 is not.
                    
                    adjacency_list.insert(std::make_pair(vertex1, std::vector<int> {vertex2}));
                    adjacency_list.at(vertex2).push_back(vertex1);
                    vertex_set.insert(vertex1);

                } else {    //vertex 1 is present in the graph but vertex2 is not.
                    
                    adjacency_list.insert(std::make_pair(vertex2, std::vector<int> {vertex1}));
                    adjacency_list.at(vertex1).push_back(vertex2);
                    vertex_set.insert(vertex2);

                }

                edge_set.insert(std::pair<int, int>(vertex1, vertex2));
            }
            
        }

        const std::unordered_set<std::pair<int, int>, pair_hash>& get_edges() {
            return edge_set;
        }
        const std::unordered_set<int>& get_vertices() {
            return vertex_set;
        }

    
        void dfs() const {
            std::unordered_set<int> visited {};

            for(auto &i : adjacency_list) {
                if(visited.find(i.first) == visited.end()) {
                    explore(i.first, visited);
                }
            }
        }

        void update_components() {
            std::unordered_set<int> visited {};

            for(auto &i : adjacency_list) {
                if(visited.find(i.first) == visited.end()) {
                    explore_components(i.first, visited);
                }
            }
        }

        void print_components() {

            std::cout << '\n';
            for(int i {}; i < components.size(); i++) {
                std::cout << i + 1 << '\n';
                std::cout << "[ ";
                for(auto &j : components.at(i)) {
                    std::cout << j << ' ';
                }
                std::cout << "]\n";
            }
        }
};

void dfs(al_graph &g) {
    std::unordered_set<int> visited;

    for(auto &i : g.adjacency_list) {
        if(visited.find(i.first) == visited.end()) {
            std::stack<std::pair<int, int>> postponed {};
            int j {};
            int vertex = i.first;
            visited.insert(vertex);

            do {
                
                while(j < g.adjacency_list.at(vertex).size()) {
                    if(visited.find(g.adjacency_list.at(vertex).at(j)) == visited.end()) {
                        vertex = g.adjacency_list.at(vertex).at(j);
                        visited.insert(vertex);
                        postponed.push(std::make_pair(vertex, j));
                        j = 0;
                    } else {
                        j++;
                    }
                }

               

                while(j == g.adjacency_list.at(vertex).size() && !postponed.empty()) {
                    vertex = postponed.top().first;
                    j = postponed.top().second;
                    postponed.pop();
                    
                    std::cout << vertex << ' ';
                    
                    if(postponed.empty()) {
                        std::cout << vertex << ' ';
                    }
                }

            } while(!postponed.empty());
        }
    }
}

int main() {
    
    al_graph g;
    
    g.add_edge(0, 1);
    g.add_edge(1, 2);
    g.add_edge(2, 3);
    g.add_edge(3, 4);
    g.add_edge(4, 5);
    g.add_edge(5, 6);
    g.add_edge(6, 7);
    g.add_edge(7, 8);
    g.add_edge(9, 10);
    // g.dfs();
    g.add_edge(11, 23);
    g.add_edge(32, 11);
    dfs(g);
    std::cout << std::endl;
    g.dfs();

    // g.update_components();
    // g.print_components();
    //The time complexity of this dfs traversal is O(|V| + |E|)
    //Took me quite a lot of time to implement it on my own. (around 2 hours give or take)
    //happiness 0 -> INFINITY
    /**
     * Now I have to implement the connectedness algorithm to check for connected components -> done
     * Next to that I have to implement the pre post algorithm. -> no need to do.
     * Then I have to implement all these algorithms for adjacency matrix representation of the same simple graphs.
    **/

    std::cout << "abhishek singh\n";
}