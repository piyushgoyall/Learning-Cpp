// What is a Connected Component
// A connected component is a subgraph in which any two vertices are connected to each other by paths,
// and which is connected to no additional vertices in the supergraph.

// IDEA
// 1) Visit the nodes in a depth - first fashion.
// 2) If the node is not visited, visit that node and its neighbour recursively.
// Each time a unvisited node is found, a new component will be found.

// Pseudocode;
// For node u in nodes:
//     if(!vis[u]){
//         components.add(visit_component(u));
//     }
// Function visit_component(src){
//     vis[src] = true;
//     for v in adj[src]:
//         visit_component(v)
// }
// Find the no of connected components in a graph and its size