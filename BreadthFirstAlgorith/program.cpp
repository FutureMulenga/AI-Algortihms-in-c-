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
    //Adds the element at the end of the list
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
             }
         }

    }
    

}



