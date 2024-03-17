// Graphs - Introduction
// Components of a graph:
// Nodes - These are the states or vertex. For instance, users in case of facebook.
// Edges - Links between states in a graph. For instance, connections between users.
// |--> Undirected - Two way edges. 
// |--> Directed - One way edges.   
                     
// Representation ---> Adjacency Matrix
//                ---> Adjacency List

// Adjacency Matrix                          |     Adjacency List
//                                           |
// 2D array, where a[i][j] = 1 if there is   | Array of lists where each a[i] is a list of nodes Xi 
// an edge from i to j else a[i][j] = 0.     | that are reachable from i.
//                                           | 
//      0   0   0   1                        |
//      0   0   0   1                        |
//      0   0   0   1                        |
//      1   1   1   0                        |

// Depth First Search
// Key Points of DFS
//             ------------PARTS---------------
//            |              |                 |
//            |       |     In        |        |
//       Pre-order    |     order     |     Post-order
//                    |               |        
//   First time  when | When the call | After working on the        
//   call comes on    | works inside  | subtree, call comes back
//   the node.        | the subtree(in| on the node. After this,
//                    | DFS Tree) of  | call won't come on the same
//                    | that node.    | node.
// Implemented using stacks

// Breadth First Search
// Key Points of BFS
// Implemented using queues. 

// Different properties of components of Graph
// - Weighted nodes - Values are associated with nodes.
// - Weighted nodes - Values are associated with edges.

