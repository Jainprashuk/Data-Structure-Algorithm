// ******** for non weighted graph ***************

#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
#include <queue>

using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction)
    {
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph
        // create an edge from u to v
        adjList[u].push_back(v);
        if (direction == 0)
        {
            // undirected edge
            // create an edge from v to u
            adjList[v].push_back(u);
        }
    }

    void printAdjacencyList()
    {
        for (auto node : adjList)
        {
            cout << node.first << " -> ";
            for (auto neighbour : node.second)
            {
                cout  << neighbour << "," ;
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g;
    g.addEdge(0, 1,  0);
    g.addEdge(1, 2,  0);
    g.addEdge(0, 2,  0);
    
    g.printAdjacencyList();
    
    return 0;
}
























// ******** for weighted graph ***************
// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <list>
// #include <queue>

// using namespace std;

// class Graph
// {
// public:
//     unordered_map<int, list<pair<int, int>>> adjList;

//     void addEdge(int u, int v, int weight, bool direction)
//     {
//         // direction = 0 -> undirected graph
//         // direction = 1 -> directed graph
//         // create an edge from u to v
//         adjList[u].push_back(make_pair(v, weight));
//         if (direction == 0)
//         {
//             // undirected edge
//             // create an edge from v to u
//             adjList[v].push_back(make_pair(u, weight));
//         }
//     }

//     void printAdjacencyList()
//     {
//         for (auto node : adjList)
//         {
//             cout << node.first << " -> ";
//             for (auto neighbour : node.second)
//             {
//                 cout << "(" << neighbour.first << "," << neighbour.second << "), ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main()
// {
//     Graph g;
//     g.addEdge(0, 1, 4, 0);
//     g.addEdge(0, 2, 1, 0);
//     g.addEdge(1, 2, 2, 0);
//     g.addEdge(1, 3, 5, 0);
//     g.addEdge(2, 3, 8, 0);
    
//     g.printAdjacencyList();
    
//     return 0;
// }
