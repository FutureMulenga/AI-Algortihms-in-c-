/*NAME: FUTURE MULENGA
  SIN: 20148647
  ASSIGNMENT: BREADTH FIRST SEARCH ALGORITHM
  COURSE: CS 471
  GITHUB: https://github.com/FutureMulenga/AI-Algortihms-in-c-/blob/main/BreadthFirstAlgorith/program.cpp
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

            // This  function is used to add an edge to the graph 
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
    //Add an  element at the end of the list
    adj[v].push_back(w); 
}

//Perform BFs given a starting vertex 
void Graph::BFS(int s){

    //Start with vertices as not visited 
    bool *visited = new bool[V];

    for(int i=0; i<V; i++){
        visited[i] = false;
    }

    //Creates a queue for BFS
    list<int> queue;

    //Start vertex marked as visited and added to queue
    visited[s] = true;
    queue.push_back(s);


    //Continue untill the queue is empty
    while (!queue.empty()){

    //Getting the front of the queue and remove it 
         s = queue.front();
         queue.pop_front();

         //Get all adjecement vertices from that vertex 
         cout << "checking vertices for vertex "<<s<<endl;

         for(auto i = adj[s].begin(); i != adj[s].end(); i++){
             
             //check the nodes not visited yet 
             if(!visited[*i]){
                 cout << "visited and queued "<<*i<<endl;
                 visited[*i] = true;

                 //push back to check this vertex
                 queue.push_back(*i);
             }
         }
    }
}

int main(){
    //Create some edges to the vertices 
    Graph g(6);

    //Creates some edges to the vertices 
    g.addEdge(0,1);
    g.addEdge(0,2);

    //connections for vertex 1
    g.addEdge(1,0);
    g.addEdge(1,3);
    g.addEdge(1,4);
    
    //connections  for vertex 2
    g.addEdge(2,0);
    g.addEdge(2,4);

    //connections for vertex 3
    g.addEdge(3,1);
    g.addEdge(3,4);
    g.addEdge(3,5);

    //connections for vertex 4
    g.addEdge(4,1);
    g.addEdge(4,2);
    g.addEdge(4,3);
    g.addEdge(4,5);

    //connections for vertex 5
    g.addEdge(5,3);
    g.addEdge(5,4);

    //perform BFS and print result
    g.BFS(2);
}



