/*NAME: FUTURE MULENGA
  SIN: 20148647
  ASSIGNMENT: DEPTH FIRST SEARCH ALGORITHM
  COURSE: CS 471
  GITHUB: https://github.com/FutureMulenga/AI-Algortihms-in-c-/blob/main/BreadthFirstAlgorith/program.cpp
*/
#include <iostream>
#include <list>
#include <map>
#include <stack>

using namespace std;

class Graph {
private:
    map<char, list<char>> adjList;

public:
    // Function to add an edge to the graph
    void addEdge(char v, char w) {
        adjList[v].push_back(w);
        adjList[w].push_back(v); // Since the graph is undirected
    }

    // DFS utility function using recursion
    void DFSUtil(char v, map<char, bool>& visited) {
        // Mark the current node as visited and print it
        visited[v] = true;
        cout << v << " ";

        // Recur for all vertices adjacent to this vertex
        list<char>::iterator i;
        for (i = adjList[v].begin(); i != adjList[v].end(); ++i) {
            if (!visited[*i]) {
                DFSUtil(*i, visited);
            }
        }
    }

    // Function to perform DFS traversal of the graph
    void DFS(char v) {
        // Mark all vertices as not visited
        map<char, bool> visited;

        // Call the recursive helper function to print DFS traversal
        DFSUtil(v, visited);
    }
};

int main() {

    Graph g;
    // Adding edges according to the graph described
    g.addEdge('K', 'C');
    g.addEdge('K', 'S'); 
    g.addEdge('K', 'B'); 
    g.addEdge('K', 'M'); 
    g.addEdge('K', 'H');
    g.addEdge('C', 'G'); 
    g.addEdge('C', 'T');
    g.addEdge('C', 'N'); 
    g.addEdge('C', 'W');
    g.addEdge('S', 'P'); 
    g.addEdge('S', 'L'); 
    g.addEdge('S', 'Z'); 
    g.addEdge('S', 'U'); 
    g.addEdge('S', 'D');
    g.addEdge('B', 'A'); 
    g.addEdge('B', 'O'); 
    g.addEdge('B', 'E'); 
    g.addEdge('B', 'J');
    g.addEdge('M', 'F'); 
    g.addEdge('M', 'X');
    g.addEdge('H', 'Q'); 
    g.addEdge('H', 'Y');
    g.addEdge('N', 'W');
    g.addEdge('U', 'D');
    g.addEdge('E', 'J');
    g.addEdge('F', 'X');

    cout << "Starting DFS from node K:\n";
    g.DFS('P');

    return 0;
}
