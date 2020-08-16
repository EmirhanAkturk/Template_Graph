template<class K, class V>
Graph<K,V>:: Graph():map{new unordered_map<K,V>} // Constructor 
{/* deliberately left blank */} 

template<class K, class V>
void Graph<K,V>::addEdge(const K& key, const V& value) 
{    
    typename std::unordered_map<K, V>::iterator itr= map->find(key);
    
    if(itr!=map->end()){//if found, update value
        itr->second=value;
        return;
    }

    else //else, insert value
        map->insert({key,value});
} 

template<class K, class V>
void Graph<K,V>::removeEdge(const K& key) 
{ 
    map->erase(key);
} 

template<class K, class V>
void Graph<K,V>::print(){
    
    for (auto& i: *map) 
    { 
        cout<<i.first<<": "<<i.second<<endl; 
    } 
}
