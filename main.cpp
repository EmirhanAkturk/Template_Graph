#include "inc/Graph.hpp"

int main() 
{ 
	// Create a graph given in the above diagram 

    Graph<int,string> g;
    g.addEdge(1,"one");
    g.addEdge(3,"three");
    g.addEdge(2,"two");
    g.addEdge(5,"five");

    g.print();

    cout<<"\nafter update\n";
    g.addEdge(1,"ONE");//update

    g.print();

    g.removeEdge(5);
    
    cout<<"\nafter remove:\n";

    g.print();

	return 0; 
} 
