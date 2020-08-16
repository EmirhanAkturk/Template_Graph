#ifndef _GRAPH_HPP_
#define _GRAPH_HPP_

#include <iostream> 
#include <unordered_map>

using namespace std; 

// Class to represent a graph 
template<class K, class V>
class Graph {   
public: 
	Graph();// Constructor 

	// function to add an edge to graph 
	void addEdge(const K& vertex,const V& value); 

    void removeEdge(const K& vertex);
    void print();

private:
    unordered_map<K,V>*map;
};

#include "../src/Graph.inl"
#endif