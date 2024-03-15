/*NAME: FUTURE MULENGA
  SIN: 20148647
  ASSIGNMENT: BREADTH FIRST SEARCH ALGORITHM
  COURSE: CS 471
*/

#include <iostream>
#include <list>

using namespace std;

//class  for representing a node in the graph
class Graph{

        private: 
            // V represents the number of vertex 
            int V;
            
            //pointer to an array of lists containing adjacent vertices of a vertex 'v'
            list<int> *adj; 
        
        public:
            //this is the constructor               
            Graph(int v);

            // This  function is used to add an edge to the 
            void  addEdge(int v, int w);

            //This is the method to traverse through the graph
            void BFS(int s);
};


Graph::Graph(int v) {
    //sets the number of vertices 
    V = v;

    //creates new adjacency list 
    adj = new list<int>[V];
    
}

void Graph::addEdge(int v, int w){
    //Adds the element at the end of the list
    adj[v].push_back(w); 
}

