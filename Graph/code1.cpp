// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <list>
// #include <queue>


// class Graph {
// public:
//  unordered_map<int, list<int>  > adjList;

//  void addEdge(int u, int v,int weight, bool direction) {
//    //direction = 0 -> undirected graph
//    //direction = 1 -> directed graph
//    //create an edge from u to v
//    adjList[u].push_back({v,weight});
//    if(direction == 0)
//    {
//      //undirected edge
//      //create an edge from v to u
//      adjList[v].push_back({u,weight});
//    }
//  }

//  void printAdjacencyList() {
//    for(auto node: adjList) {
//      cout << node.first << "-> " ;
//      for(auto neighbour: node.second) {
//        cout <<"("<<neighbour.first<<","<<neighbour.second<<"), ";
//      }
//      cout << endl;
//    }
//  }

// };

// int main()
// {

//   Graph<int> g;
//   // n -> number of nodes in graph
//   int n = 5;
//   g.addEdge(0, 1, 0);
//   g.addEdge(1, 3, 0);
//   g.addEdge(0, 2, 0);
//   g.addEdge(2, 4, 0);

//   g.printAdjacencyList();
//   cout << endl;

//   unordered_map<int, bool> visited;
//   // run a loop for all nodes
//   cout << "Printing BFS Traversal: " << endl;
//   for (int i = 0; i < n; i++)
//   {
//     if (!visited[i])
//     {
//       g.bfs(i, visited);
//     }
//   }
//   cout << endl
//        << "Printing DFS Traversal: " << endl;
//   unordered_map<int, bool> visited2;
//   for (int i = 0; i < n; i++)
//   {
//     if (!visited2[i])
//     {
//       g.dfs(i, visited2);
//     }
//   }

//   // Graph<char> g;
//   // g.addEdge('a','b', 0);
//   // g.addEdge('b', 'c', 0);
//   // g.addEdge('a', 'c', 0);
//   // g.printAdjacencyList();

//   // directed input
//   // g.addEdge(srcNode, destNode, weight, direction);
//   //  g.addEdge(0,1,5,1);
//   //  g.addEdge(1,2,8,1);
//   //  g.addEdge(0,2,6,1);
//   //  cout << endl;
//   //  g.printAdjacencyList();

//   // undirected edge input
//   //  g.addEdge(0,1,0);
//   //  g.addEdge(1,2,0);
//   //  g.addEdge(0,2,0);
//   //  cout << endl;
//   //  g.printAdjacencyList();

//   // int n;
//   // cout << "Enter the number of nodes: " << endl;
//   // cin >> n;

//   // int e;
//   // cout << "Enter the number of edges: " << endl;
//   // cin >> e;

//   // //undirected graph

//   // int n;
//   // cout << "Enter the number of nodes: " << endl;
//   // cin >> n;

//   // vector<vector<int> > adj(n, vector<int>(n,0));

//   // int e;
//   // cout << "Enter the number of edges: " << endl;
//   // cin >> e;

//   // for(int i=0; i<e; i ++) {
//   //  int u,v;
//   //  cin >> u >> v;
//   //  //mark 1
//   //  adj[u][v] = 1;
//   // }

//   // //printing
//   // for(int i=0; i<n; i++) {
//   //  for(int j =0; j<n; j++) {
//   //    cout << adj[i][j] << " ";
//   //  }
//   //  cout << endl;
//   // }

//   return 0;
// }